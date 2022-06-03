#ifndef __GENRE_HPP__
#define __GENRE_HPP__
#include "Recommender.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

//genre
class Genre : public Recommender {
    private:
	int genre;
	string artist;
        string song;
    public:
	Genre(int genre, string artist, string song) {
	    this -> genre = genre;
            this -> artist = artist;
            this -> song = song;
	}
	void Favorite(vector <map<pair<string, string>, string>> Genre) override{
	     map<pair<string, string>, string>::iterator geniterator;
	     map<pair<string, string>, string>::iterator iter;
	     int i = 1;
             cout << "Here's a list of songs from your favorite genre: " << endl;
	     for (geniterator = Genre.at(genre).begin(); geniterator != Genre.at(genre).end(); ++geniterator) {
		 cout << "   (" << i << ") '" << geniterator -> second << "' by " << geniterator -> first.second << endl;
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
             cout << endl;
	     cout << "Here's a list of songs from a similar genre you might like: " << endl;

             i  = 1;
	     for (iter = Genre.at(genre).begin(); iter != Genre.at(genre).end(); ++iter) {
                 cout << "   (" << i << ") '" << iter -> second << "' by " << iter -> first.second << endl;
		 ++i;
             }
         }
};

#endif //__GENRE_HPP__
