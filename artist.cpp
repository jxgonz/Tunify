#include <iostream>
#include "artist.h"

using namespace std; 

Artist::Artist(string _artist, string _feature) {
	artist = _artist; 
	feature = _feature; 
}   

string Artist::getFavArtist() {
	return artist; 
}

string Artist::getFavFeature() {
	return feature; 
}

void Artist::favArtist(string myartist) {
	vector <string> artists; 
	myartist.push_back(artists); 
}

void Artist::favFeature(string feat) {
        vector <string> artists;
        myartist.push_back(artists;)
}
