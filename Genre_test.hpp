#ifndef __GENRE_TEST_HPP__
#define __GENRE_TEST_HPP__

#include <iostream>
#include "gtest/gtest.h"
#include "Genre.hpp"
#include "Playlist.hpp"

using namespace std;

TEST(GenreTest, GenreTestRap) {
    Genre* test = new Genre(1, "Kendrick Lamar", "N5");
    EXPECT_EQ(test->GetGenre(), 1);
}

TEST(GenreTest, GenreTestRB) {
    Genre* test = new Genre(2, "Ravyn Lenae", "Venom");
    EXPECT_EQ(test->GetGenre(), 2);
}

TEST(GenreTest, GenreTestPop) {
    Genre* test = new Genre(3, "Harry Styles", "Daydreaming");
    EXPECT_EQ(test->GetGenre(), 3);
}

TEST(GenreTest, GenreTestCountry) {
    Genre* test = new Genre(4, "I'll Be Here in the Morning", "Townes Van Zandt");
    EXPECT_EQ(test->GetGenre(), 4);
}

TEST(GenreTest, GenreTestLatin) {
    Genre* test = new Genre(5, "Miguel", "Te Lo Dije");
    EXPECT_EQ(test->GetGenre(), 5);
}
#endif //__GENRE_TEST_HPP__
    
