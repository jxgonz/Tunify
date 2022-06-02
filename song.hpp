#ifndef __SONG_HPP__
#define __SONG_HPP__
#include "Recommender.hpp"
#include <map>
#include <iterator>

class Song : public Recommender {
 private:
    string artist;
    string song;
    int genre;
    string album;
 public:
    Song(string artist, string song, int genre, string album) {
        this->artist = artist;
        this->song = song;
        this->genre = genre;
        this->album = album;
    }

    void Favorite(vector<map<pair<string, string>, string>> Genre) override {
        map<pair<string, string>, string>::iterator iter;
        int i = 1;
        cout << "Here's a List of Songs you might like:" << endl;
        for (iter = Genre.at(genre).begin(); iter != Genre.at(genre).end(); ++iter) {
            cout << "   (" << i << ") '" << iter -> second << "' by " << iter -> first.second << endl;
            ++i;
        }

        if (genre == 0) {
          genre = 1;
        }	     
	    else if (genre == 1) {
          genre = 0;
        }
        else if (genre == 2) {
          genre = 4;
        }
        else if (genre == 4) {
          genre = 2;
        }
        else if (genre == 5) {
          genre = 6;
        }
        else if (genre == 6) {
          genre = 5;
        }
        else if (genre == 3) {
          genre = 2;
        }
        for (iter = Genre.at(genre).begin(); iter != Genre.at(genre).end(); ++iter) {
            cout << "   (" << i << ") '" << iter -> second << "' by " << iter -> first.second << endl;
            ++i;
        }
    }   
};

#endif //__SONG_HPP__
