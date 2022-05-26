#ifndef __ARTIST_H__
#define __ARTIST_H__
#include <iostream>

using namespace std; 
class Artist {
private: 
    string artist; 
    string feature; 
public: 
    Artist(); 
    Artist(string, string);
    static string getFavArtist(); 
    static string getFavFeature(); 
    void favArtist(); 
    void favFeature();  
};
#endif 
