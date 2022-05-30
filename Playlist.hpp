#ifndef __PLAYLIST_HPP__
#define __PLAYLIST_HPP__
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
    vector<Playlist> rec;

 public:
    Playlist();
    Playlist(string, string, string, string);

    void Add(Playlist);
    void Remove(string);
    void GenerateRec();

    const string GetSong() const;
    const string GetArtist() const;
    const string GetGenre() const;
    const string GetAlbum() const;
    Playlist getRec(int);
    int GetSize();

    void PrintPlaylist();
};

#endif
