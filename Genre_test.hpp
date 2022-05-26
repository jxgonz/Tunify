#ifndef __GENRE_TEST_HPP__
#define __GENRE_TEST_HPP__

#include <iostream>
#include "gtest/gtest.h"
#include "Genre.hpp"

using namespace std;

TEST(GenreTest, GenreTestSongs) {
    Genre test = Genre("Rap", "Trap Rap");
    EXPECT_EQ(test.getFavGenre("Bad and Boujee");
    EXPECT_EQ(test.getFavGenre("Stir Fry");
    EXPECT_EQ(test.getFavGenre("a lot");
    EXPECT_EQ(test.getFavGenre("On the Run");
    EXPECT_EQ(test.getFavGenre("Back In Blood");
}

#endif //__GENRE_TEST_HPP__
    
