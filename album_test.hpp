#ifndef __SONG_TEST_HPP__
#define __SONG_TEST_HPP__
#include "gtest/gtest.h"

#include "Playlist.hpp"

using namespace std;

TEST(AlbumTest, TestEmpty) {
    Playlist* test = new Playlist("", "", "", "");
    EXPECT_EQ(test->GetSong(), "");
    EXPECT_EQ(test->GetArtist(), "");
    EXPECT_EQ(test->GetAlbum(), "");
    EXPECT_EQ(test->GetGenre(), "");
}

TEST(AlbumTest, TestVec) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.size(), 7);
}

TEST(AlbumTest, TestRapAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(0).begin()->first.first, "808s & Heartbreak");
}

TEST(AlbumTest, TestRBAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(1).begin()->first.first, "Blonde");
}

TEST(AlbumTest, TestPopAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(2).begin()->first.first, "25");
}

TEST(AlbumTest, TestCountryAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(3).begin()->first.first, "7 EP");
}

TEST(AlbumTest, TestLatinAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(4).begin()->first.first, "Barrio Fino");
}

TEST(AlbumTest, TestMetalAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(5).begin()->first.first, "Dr.Feelgood");
}

TEST(AlbumTest, TestRockAlbum) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(6).begin()->first.first, "Aftermath");
}

#endif //__SONG_TEST_HPP__
