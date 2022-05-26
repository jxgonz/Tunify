#include <iostream>
#include "Artist.h"

using namespace std; 

int main() {
	string art; 
	string feat; 
	Artist a = Artist(art, feat); 	


	cout << "Who is your favorite artist or band?" << endl; 
	getline(cin, artist); 
	a.getFavArtist; 

	cout << "What is your favorite artist's feature?" << endl;
	getline(cin, artist); 
	a.getFavFeature; 
	
	return 0; 
}
