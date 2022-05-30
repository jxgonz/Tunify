#ifndef __RECOMMENDER_HPP__
#define __RECOMMENDER_HPP__
#include <iostream>
#include <vector>
#include "Playlist.hpp"
using namespace std;

class Recommender : public Playlist {
 public:
    Recommender();
    virtual void Favorite(vector<Playlist> rec) = 0;
};

#endif
