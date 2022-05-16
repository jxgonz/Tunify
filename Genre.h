#ifndef __GENRE_HPP__
#define __GENRE_HPP__
#include <iostream>

using namespace std;

//genre
class Genre {
    private:
	string genre;
	string subgenre;
    public:
	Genre(string, string);
	string getFavGenre();
	string getFavSubGenre();
	void favGere();
	void favSubGenre();

};
#endif
