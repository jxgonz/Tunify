#ifndef __PLAYLIST_HPP__
#define __PLAYLIST_HPP__
#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include "Recommender.hpp"
using namespace std;

class Playlist {
 private:
    string song;
    string artist;
    string genre;
    string album;
    vector<Playlist*> songs;
    Recommender* r;

 public:
    Playlist();
    Playlist(Recommender* const a) : r(a) {}
    Playlist(string, string, string, string);

    void Add(Playlist*);
    void Remove(string);

    void FavRec();

    const string GetSong() const;
    const string GetArtist() const;
    const string GetGenre() const;
    const string GetAlbum() const;
    int GetSize();

    void PrintPlaylist();
};

#endif
