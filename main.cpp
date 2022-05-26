#include <iostream>
#include "Genre.hpp"

using namespace std;

int main() {
    string gen;
    string subgen;
    Genre g = Genre(gen, subgen);

    cout << "Hey, what is your favorite genre?" << endl;
    getline(cin, gen);
    g.getFavGenreSongs;
    
    cout << "Hey, what is your favorite niche/subgenre?" << endl;
    getline(cin, gen);
    g.getFavSubGenreSongs;

    return 0;
}
