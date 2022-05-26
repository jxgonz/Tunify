#include <iostream>
#include "Genre.hpp"

using namespace std;

Genre::Genre() {
    genresongs = "none";
    subgenresongs = "none";
}

Genre::Genre(string _genre, string _subgenre){
    genresongs = _genre;
    subgenresongs = _subgenre;

}

static string Genre::getFavGenreSongs() {
    return genresongs;
}

static string Genre::getFavSubGenreSongs() {
    return subgenresongs;
}

void Genre::favGenre(string fgenre) {
    vector <string> genresongs;
    genres.push_back(fgenre);
}

void Genre::favSubGenre(string sgenre) {
    vector <string> genresongs;
    genresongs.push_back(sgenre);
}
