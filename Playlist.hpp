#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include <iostream>
#include <vector>
using namespace std;

class Playlist {
 private:
    string song;
    string artist;
    string genre;
    string album;
    vector<Playlist> songs;

 public:
    Playlist();
    Playlist(string, string, string, string);

    void Add(Playlist);
    void Remove(string);

    const string GetSong() const;
    const string GetArtist() const;
    const string GetGenre() const;
    const string GetAlbum() const;
    int size();

    void PrintPlaylist();
};

#endif