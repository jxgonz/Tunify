#include <iostream>
#include "Playlist.hpp"

void menu(Playlist);

int main() {
    Playlist myplay;
    menu(myplay);

    return 0;
}

void menu(Playlist myplaylist) {
    char menuOption;
    cout << endl << "MENU" << endl;
    cout << "a - Add song to playlist" << endl;
    cout << "r - Remove song from playlist" << endl;
    cout << "p - Print playlist" << endl;
    cout << "q - Quit" << endl << endl;

    while (menuOption != 'q') {
        cout << "Choose an option: ";
        cin >> menuOption;
	cout << endl;

        if (menuOption == 'a') {
            string s;
            string a;
            string g;
            string al;

            cin.ignore();
            cout << "ADD SONG TO PLAYLIST" << endl;
            cout << "What your favorite song?" << endl;
            getline(cin, s);
            cout << "Who is the artist?" << endl;
            getline(cin, a);
            cout << "What genre is the song in?" << endl;
            getline(cin, g);
            cout << "What album is the song in?" << endl;
            getline(cin, al);
            cout << endl;

            Playlist song = Playlist(s, a, g, al);
            myplaylist.Add(song);

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
            cin >> songname;

            myplaylist.Remove(songname);

            cout << endl << "MENU" << endl;
            cout << "a - Add song to playlist" << endl;
            cout << "r - Remove song from playlist" << endl;
            cout << "p - Print playlist" << endl;
            cout << "q - Quit" << endl << endl;
        }

        if (menuOption == 'p') {
            myplaylist.PrintPlaylist();

            cout << endl << "MENU" << endl;
            cout << "a - Add song to playlist" << endl;
            cout << "r - Remove song from playlist" << endl;
            cout << "p - Print playlist" << endl;
            cout << "q - Quit" << endl << endl;        
        }
    }
}
