#ifndef __PLAYLIST_HPP__
#define __PLAYLIST_HPP__
#include <iostream>
using namespace std;

class Playlist {
 private:
    string song;
    string artist;
    string genre;
    string album;
    Playlist* next;
    Playlist* songs[];

 public:
    Playlist(string, string, string, string);

    void Add(Playlist*);
    void Remove();

    const string GetSong() const;
    const string GetArtist() const;
    const string GetGenre() const;
    const string GetAlbum() const;

    void PrintPlaylist();
};

#endif
