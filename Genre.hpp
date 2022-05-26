#ifndef __GENRE_HPP__
#define __GENRE_HPP__

#include <iostream>

using namespace std;

//genre
class Genre {
    private:
	string genresongs;
	string subgenresongs;
    public:
        Genre();
	Genre(string, string);
	static string getFavGenreSongs();
	static string getFavSubGenreSongs();
	void favGenre();
	void favSubGenre();
};

#endif
