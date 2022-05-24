#ifndef __ARTIST_H__
#define __ARTIST_H__
#include <iostream>

using namespace std; 
class Artist {
private: 
    string artist; 
    string feature; 
public: 
    Artist(string, string);
    string getFavArtist(); 
    string getFavFeature(); 
    void favArtist(); 
    void favFeature();  
};
#endif 
