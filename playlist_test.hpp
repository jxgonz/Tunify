#ifndef __PLAYLIST_TEST_HPP__
#define __PLAYLIST_TEST_HPP__
#include "gtest/gtest.h"
#include "Playlist.cpp"
#include "Playlist.hpp"

using namespace std;

TEST(PlaylistTest, TestGetSong) {
    Playlist test = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    EXPECT_EQ(test.GetSong(), "Smuckers");
}

TEST(PlaylistTest, TestGetArtist) {
    Playlist test = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    EXPECT_EQ(test.GetArtist(), "Tyler, the Creator");
}


TEST(PlaylistTest, TestGetGenre) {
    Playlist test = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    EXPECT_EQ(test.GetGenre(), "Rap");
}


TEST(PlaylistTest, TestGetAlbum) {
    Playlist test = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    EXPECT_EQ(test.GetAlbum(), "Cherry Bomb");
}

TEST(PlaylistTest, TestAddSameArtist) {
    Playlist testplay;
    Playlist test1 = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist test2 = Playlist("Yonkers", "Tyler, the Creator", "Rap", "Goblin");
    Playlist test3 = Playlist("Wolf", "Tyler, the Creator", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    EXPECT_EQ(testplay.size(), 3);
}

TEST(PlaylistTest, TestAddAlreadyExisting) {
    Playlist testplay;
    Playlist test1 = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist test2 = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    testplay.Add(test1);
    testplay.Add(test2);

    EXPECT_EQ(testplay.size(), 1);
}

TEST(PlaylistTest, TestRemove) {
    Playlist testplay;
    Playlist test1 = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist test2 = Playlist("Yonkers", "Tyler, the Creator", "Rap", "Goblin");
    Playlist test3 = Playlist("Wolf", "Tyler, the Creator", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    testplay.Remove("Smuckers");

    EXPECT_EQ(testplay.size(), 2);
}

TEST(PlaylistTest, TestRemoveNonExisting) {
    Playlist testplay;
    Playlist test1 = Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist test2 = Playlist("Yonkers", "Tyler, the Creator", "Rap", "Goblin");
    Playlist test3 = Playlist("Wolf", "Tyler, the Creator", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    testplay.Remove("Garden Shed");

    EXPECT_EQ(testplay.size(), 3);
}


#endif //__PLAYLIST_TEST_HPP__
