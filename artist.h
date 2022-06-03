#ifndef __ARTIST_H__
#define __ARTIST_H__
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
        cout << "Here's a List of Artist you might enjoy!:" << endl;
        for (iter = Genre.at(genre).begin(); iter != Genre.at(genre).end(); ++iter) {
            cout << "   (" << i << ") '" << iter ->first.first << "' by " << iter -> first.second << endl;
            cout << "           '" << iter->second << " " << iter->first.first << endl << endl;
            ++i;
        }
    }  
}; 

#endif 
