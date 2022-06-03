#ifndef __SONG_TEST_HPP__
#define __SONG_TEST_HPP__
#include "gtest/gtest.h"

#include "Playlist.hpp"

using namespace std;

TEST(SongTest, TestEmpty) {
    Playlist* test = new Playlist("", "", "", "");
    EXPECT_EQ(test->GetSong(), "");
    EXPECT_EQ(test->GetArtist(), "");
    EXPECT_EQ(test->GetAlbum(), "");
    EXPECT_EQ(test->GetGenre(), "");
}

TEST(SongTest, TestVec) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.size(), 7);
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(0).begin()->second, "Heartless");
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(1).begin()->second, "Nikes");
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(2).begin()->second, "Hello");
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(3).begin()->second, "Old Town Road");
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(4).begin()->second, "Gasolina");
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(5).begin()->second, "Kickstart My Heart");
}

TEST(SongTest, TestRapSong) {
    Playlist test;
    vector<map<pair<string, string>, string>> testvec = test.GenerateRec();
    EXPECT_EQ(testvec.at(6).begin()->second, "Paint It, Black");
}

#endif //__SONG_TEST_HPP__

