#ifndef __GENRE_TEST_HPP__
#define __GENRE_TEST_HPP__

#include <iostream>
#include "gtest/gtest.h"
#include "Genre.hpp"
#include "Playlist.hpp"

using namespace std;

TEST(GenreTest, GenreTestSongs) {
    Playlist test = new Genre("Rap", "Kendrick Lamar", "N5");
    EXPECT_EQ(test->GetGenre(), "Rap/Hip-Hop");
}

TEST(GenreTest, GenreTestSongs) {
    Playlist test = new Genre("RB", "Ravyn Lenae", "Venom");
    EXPECT_EQ(test->GetGenre(), "R&B");
}

TEST(GenreTest, GenreTestSongs) {
    Playlist test = new Genre("Pop", "Harry Styles", "Daydreaming");
    EXPECT_EQ(test->GetGenre(), "Pop");
}

TEST(GenreTest, GenreTestSongs) {
    Playlist test = new Genre("Country", "I'll Be Here in the Morning", "Townes Van Zandt");
    EXPECT_EQ(test->GetGenre(), "Country");

TEST(GenreTest, GenreTestSongs) {
    Playlist test = new Genre("Latin", "Miguel", "Te Lo Dije");
    EXPECT_EQ(test->GetGenre(), "Latin");
}
#endif //__GENRE_TEST_HPP__
    
