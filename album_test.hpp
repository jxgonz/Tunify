#ifndef __ALBUM_TEST_HPP__
#define __ALBUM_TEST_HPP__
#include "gtest/gtest.h"

#include "Playlist.hpp"
#include "Recommender.hpp"
#include "album.hpp"

using namespace std;

TEST(AlbumTest, TestVecSize) {
    Playlist test(new Album());
    EXPECT_EQ(test.FavRec(), "");
}

#endif //__ALBUM_TEST_HPP__
