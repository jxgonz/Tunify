#ifndef __GENRE_HPP__
#define __GENRE_HPP__

#include <iostream>

using namespace std;

//genre
class Genre {
    private:
	string genre;
	string artist;
        string song;
    public:
	Genre(string genre, string artist, string song) {
	    this -> genre = genre;
            this -> artist = artist;
            this -> song = song;
	}
	void favGenre(vector <map<pair<string, string>> Genre) override{
	     map<pair<string, string<>, string>::iterator geniterator;
             cout << "Here's a list of songs from your favorite genre: " << endl;
	     for (geniterator = Genre.at(genre).begin(); geniterator != Genre.at(genre).end(); ++geniterator) {
		 cout << "   (" << 1 << ") '" << geniterator -> second << "' by " << geniterator -> first.second << endl;
             }
         }
};

#endif
