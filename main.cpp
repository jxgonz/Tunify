#include "Playlist.hpp"
#include "Recommender.hpp"
#include "album.hpp"

void menu(Playlist*);

int main() {

    Playlist* myplaylist;

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

    int choice;
    cout << "Do you want a curated list of song recommendations based on your favorite:"<< endl;
    cout << "1.song    2.artist    3.genre    4.album" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Song Implementation" << endl;
    }
    if (choice == 2) {
        cout << "Artist Implementation" << endl;
    }
    if (choice == 3) {
        cout << "Genre Implementation" << endl;
    }
    if (choice == 4) {
        Playlist favAlbum(new Album(artist, song, genre, album));
        favAlbum.FavRec();

    }
    if (choice >= 5) {
        cout << "Invalid Input!" << endl;
    }

    return 0;
}
