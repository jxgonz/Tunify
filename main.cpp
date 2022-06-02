#include "Playlist.hpp"
#include "Recommender.hpp"
#include "album.hpp"
#include "song.hpp"
#include "Genre.hpp"

void menu(Playlist*);
void rec();


int main() {

    Playlist* myplaylist;
    cout << "Hello! Welcome to Tunify" << endl;

    char choice;
    cout << endl << "HOME MENU" << endl;
    cout << "r - Find Song Recommendations" << endl;
    cout << "e - Edit Playlist" << endl;
    cout << "q - Quit program" << endl;

    while (choice != 'q') {
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 'r') {
            rec();
            cout << endl << "HOME MENU" << endl;
            cout << "r - Find Song Recommendations" << endl;
            cout << "e - Edit Playlist" << endl;
            cout << "q - Quit program" << endl;
        }
        if (choice == 'e') {
            menu(myplaylist);
            cout << endl << "HOME MENU" << endl;
            cout << "r - Find Song Recommendations" << endl;
            cout << "e - Edit Playlist" << endl;
            cout << "q - Quit program" << endl;
        }
    }

    cout << endl << "Goodbye!" << endl;

    return 0;
}

void menu(Playlist* myplaylist) {
    char menuOption;
    cout << endl << "PLAYLIST MENU" << endl;
    cout << "a - Add song to playlist" << endl;
    cout << "r - Remove song from playlist" << endl;
    cout << "p - Print playlist" << endl;
    cout << "q - Quit and go back to home menu" << endl << endl;

    while (menuOption != 'q') {
        cout << "Choose an option: ";
        cin >> menuOption;

        if (menuOption == 'a') {
            string s;
            string a;
            string g;
            string al;

            cin.ignore();
            cout << "ADD SONG TO PLAYLIST" << endl;
            cout << "Name of song?" << endl;
            getline(cin, s);
            cout << "Name of artist?" << endl;
            getline(cin, a);
            cout << "What genre is the song in?" << endl;
            getline(cin, g);
            cout << "What album is the song in?" << endl;
            getline(cin, al);
            cout << endl;

            Playlist* song = new Playlist(a, s, g, al);
            myplaylist->Add(song);

            cout << endl << "MENU" << endl;
            cout << "a - Add song to playlist" << endl;
            cout << "r - Remove song from playlist" << endl;
            cout << "p - Print playlist" << endl;
            cout << "q - Quit" << endl << endl;
        }

        if (menuOption == 'r') {
            string songname;

            cout << "REMOVE SONG FROM PLAYLIST" << endl;
            cout << "Enter song name you want to remove:" << endl;
            cin.ignore();
            getline(cin, songname);

            myplaylist->Remove(songname);

            cout << endl << "MENU" << endl;
            cout << "a - Add song to playlist" << endl;
            cout << "r - Remove song from playlist" << endl;
            cout << "p - Print playlist" << endl;
            cout << "q - Quit" << endl << endl;
        }

        if (menuOption == 'p') {
            myplaylist->PrintPlaylist();

            cout << endl << "MENU" << endl;
            cout << "a - Add song to playlist" << endl;
            cout << "r - Remove song from playlist" << endl;
            cout << "p - Print playlist" << endl;
            cout << "q - Quit" << endl << endl;        
        }
    }
}

void rec() {
    cout << endl << "RECOMMENDATION MENU" << endl;
    cout << "Do you want a curated list of song recommendations based on your favorite:"<< endl;
    cout << "a. song" << endl;
    cout << "b. artist" << endl;
    cout << "c. genre" << endl;
    cout << "d. album" << endl;
    cout << "q. Quit and go back to home menu" << endl;
    char choice;

    while (choice != 'q') {
        cout << "Choose an option: ";
        cin >> choice;

        if (choice != 'q') {
            cout << "What is your favorite song?" << endl;
            string song;
            cin.ignore();
            getline(cin, song);
            cout << "Who wrote the song?" << endl;
            string artist;
            getline(cin, artist);
            cout << "What album is the song in? If none, enter 'N/A'" << endl;
            string album;
            getline(cin, album);
            cout << "What genre is this song in?" << endl;
            cout << "1. Rap/Hip-Hip    2. R&B/Soul    3. Pop    4. Country    5. Latin    6. Metal    7.Rock" << endl;
            int genre;
            cin >> genre;
            --genre;

            if (choice == 'a') {
                Playlist favSong(new Song(artist, song, genre, album));
                favSong.FavRec();
            }
            if (choice == 'b') {
                cout << "Artist Implementation" << endl;
            }
            if (choice == 'c') {
                cout << "Genre Implementation" << endl;
            }
            if (choice == 'd') {
                Playlist favAlbum(new Album(artist, song, genre, album));
                favAlbum.FavRec();
            }
            cout << endl << "RECOMMENDATION MENU" << endl;
            cout << "Do you want a curated list of song recommendations based on your favorite:"<< endl;
            cout << "a. song" << endl;
            cout << "b. artist" << endl;
            cout << "c. genre" << endl;
            cout << "d. album" << endl;
            cout << "q. Quit and go back to home menu" << endl;
        }
    }
}

