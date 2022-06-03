#ifndef __RECOMMENDER_HPP__
#define __RECOMMENDER_HPP__
#include <iostream>
#include <vector>
using namespace std;

class Recommender {
 public:
    virtual ~Recommender() {}
    virtual void Favorite(vector<map<pair<string, string>, string>> Genre) = 0;
};

#endif
