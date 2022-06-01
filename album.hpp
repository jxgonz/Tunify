#ifndef __ALBUM_HPP__
#define __ALBUM_HPP__
#include "Recommender.hpp"
#include <map>
#include <iterator>

class Album : public Recommender {
 private:
    string artist;
    string song;
    int genre;
    string album;
 public:
    Album(string artist, string song, int genre, string album) {
        this->artist = artist;
        this->song = song;
        this->genre = genre;
        this->artist = artist;
    }


    void Favorite(vector<map<pair<string, string>, string>> Genre) override {
        map<pair<string, string>, string>::iterator iter;
        int i = 1;
        cout << "Here's a List of Recommended Albums:" << endl;
        for (iter = Genre.at(genre).begin(); iter != Genre.at(genre).end(); ++iter) {
            cout << "   (" << i << ") '" << iter ->first.first << "' by " << iter -> first.second << endl;
            cout << "           '" << iter->second << "' is a song in " << iter->first.first << endl << endl;
            ++i;
        }
    }   
};

#endif
