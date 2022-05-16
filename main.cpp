#include <iostream>
#include "Playlist.hpp"

int main() {
    string s;
    string a;
    string g;
    string al;

    cout << "What your favorite song?" << endl;
    getline(cin, s);

    cout << "Who is the artist?" << endl;
    getline(cin, a);

    cout << "What genre is the song in?" << endl;
    getline(cin, g);

    cout << "What album is the song in?" << endl;
    getline(cin, al);

    Playlist pl = Playlist(s, a, g, al);
    cout << endl << pl.GetSong() << endl;
    cout << pl.GetArtist() << endl;
    cout << pl.GetGenre() << endl;
    cout << pl.GetAlbum() << endl;

    pl.Add(&pl);
    cout << endl;
    pl.PrintPlaylist();

    return 0;
}
