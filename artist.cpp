#include <iostream>
#include "artist.h"

using namespace std; 
Artist::Artist() {
	artist = "none"; 
	feature = "none"; 
}
Artist::Artist(string _artist, string _feature) {
	artist = _artist; 
	feature = _feature; 
}   

static string Artist::getFavArtist() {
	return artist; 
}

static string Artist::getFavFeature() {
	return feature; 
}

void Artist::favArtist(string fartist) {
	vector <string> artist; 
	artist.push_back(fartist); 
}

void Artist::favFeature(string feat) {
        vector <string> artist;
        artist.push_back(feat;)
}
