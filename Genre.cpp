#include <iostream>
#include "Genre.h"

using namespace std;

Genre::Genre(string _genre, string _subgenre){
    genre = _genre;
    subgenre = _subgenre;

}

string Genre::getFavGenre() {
    return genre;
}

string Genre::getFavSubGenre() {
    return subgenre;
}

void Genre::favGenre(string mygenre) {
    vector <string> genres;
    mygenre.push_back(genres);
}

void Genre::favSubGenre(string sgenre) {
    vector <string> genres;
    sgenre.push_back(genres);
}
