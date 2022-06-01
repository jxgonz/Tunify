#ifndef __PLAYLIST_TEST_HPP__
#define __PLAYLIST_TEST_HPP__
#include "gtest/gtest.h"

#include "Playlist.hpp"

using namespace std;

TEST(PlaylistTest, TestGetSong) {
    Playlist* test = new Playlist("Tyler, The Creator", "Smuckers", "Rap", "Cherry Bomb");
    EXPECT_EQ(test->GetSong(), "Smuckers");
}

TEST(PlaylistTest, TestGetArtist) {
    Playlist* test = new Playlist("Tyler, The Creator", "Smuckers", "Rap", "Cherry Bomb");
    EXPECT_EQ(test->GetArtist(), "Tyler, The Creator");
}


TEST(PlaylistTest, TestGetGenre) {
    Playlist* test = new Playlist("Tyler, The Creator", "Smuckers", "Rap", "Cherry Bomb");
    EXPECT_EQ(test->GetGenre(), "Rap");
}


TEST(PlaylistTest, TestGetAlbum) {
    Playlist* test = new Playlist("Tyler, The Creator", "Smuckers", "Rap", "Cherry Bomb");
    EXPECT_EQ(test->GetAlbum(), "Cherry Bomb");
}

TEST(PlaylistTest, TestAddSameArtist) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Yonkers", "Tyler, the Creator", "Rap", "Goblin");
    Playlist* test3 = new Playlist("Wolf", "Tyler, the Creator", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    EXPECT_EQ(testplay.GetSize(), 3);
}

TEST(PlaylistTest, TestAddAlreadyExisting) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    testplay.Add(test1);
    testplay.Add(test2);

    EXPECT_EQ(testplay.GetSize(), 1);
}

TEST(PlaylistTest, TestRemove) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Tyler, the Creator", "Smuckers", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Tyler, the Creator", "Yonkers", "Rap", "Goblin");
    Playlist* test3 = new Playlist("Tyler, the Creator", "Wolf", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    testplay.Remove("Smuckers");

    EXPECT_EQ(testplay.GetSize(), 2);
}

TEST(PlaylistTest, TestRemoveNonExisting) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Yonkers", "Tyler, the Creator", "Rap", "Goblin");
    Playlist* test3 = new Playlist("Wolf", "Tyler, the Creator", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    testplay.Remove("Garden Shed");

    EXPECT_EQ(testplay.GetSize(), 3);
}


#endif //__PLAYLIST_TEST_HPP__
