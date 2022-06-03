#ifndef __ARTIST_TEST_HPP__
#define __ARTIST_TEST_HPP__
#include "gtest/gtest.h"

#include "Playlist.hpp"

using namespace std;

TEST(ArtistTest, TestEmpty) {
    Playlist* test = new Playlist("", "", "", "");
    EXPECT_EQ(test->GetSong(), "");
    EXPECT_EQ(test->GetArtist(), "");
    EXPECT_EQ(test->GetAlbum(), "");
    EXPECT_EQ(test->GetGenre(), "");
}

TEST(ArtistTest, TestVec) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.size(), 7);
}

TEST(ArtistTest, TestRapArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(0).begin()->second, "Heartless");
}

TEST(ArtistTest, TestRBArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(1).begin()->second, "Nikes");
}

TEST(ArtistTest, TestRPopArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(2).begin()->second, "Hello");
}

TEST(Artist, TestCountryArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(3).begin()->second, "Old Town Road");
}

TEST(ArtistTest, TestLatinArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(4).begin()->second, "Gasolina");
}

TEST(ArtistTest, TestMetalArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(5).begin()->second, "Kickstart My Heart");
}

TEST(ArtistTest, TestRockArtist) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(6).begin()->second, "Paint It, Black");
}

#endif //__SONG_TEST_HPP__
