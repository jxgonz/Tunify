#ifndef __ARTIST_HPP__
#define __ARTIST_HPP__
#include "Recommender.hpp"
#include <map>
#include <iterator>

class Artist : public Recommender {
 private:
    string artist;
    string song;
    int genre;
    string album;
 public:
    Artist(string artist, string song, int genre, string album) {
        this->artist = artist;
        this->song = song;
        this->genre = genre;
        this->album = album;
    }

    void Favorite(vector<map<pair<string, string>, string>> Genre) override {
        map<pair<string, string>, string>::iterator iter;
        int i = 1;
        cout << "Here's a List of Artists that are similar:" << endl;
        for (iter = Genre.at(genre).begin(); iter != Genre.at(genre).end(); ++iter) {
            cout << "   (" << i << ") " << iter ->first.second << endl;
            cout << "           '" << iter->second << "' is a song by " << iter->first.second << endl << endl;
            ++i;
        }
    }   
};

#endif //__ALBUM_HPP__
