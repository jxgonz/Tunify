#ifndef __ALBUM_TEST_HPP__
#define __ALBUM_TEST_HPP__
#include "gtest/gtest.h"

#include "Playlist.hpp"

using namespace std;

TEST(AlbumTest, TestEmptySong) {
    Playlist* test = new Playlist("Tyler, The Creator", "", "Rap", "Cherry Bomb");
    EXPECT_EQ(test->GetSong(), "");
}

TEST(AlbumTest, TestEmptyArtist) {
    Playlist* test = new Playlist("", "Smuckers", "Rap", "Cherry Bomb");
    EXPECT_EQ(test->GetArtist(), "");
}


TEST(AlbumTest, TestEmptyGenre) {
    Playlist* test = new Playlist("Tyler, The Creator", "Smuckers", "", "Cherry Bomb");
    EXPECT_EQ(test->GetGenre(), "");
}


TEST(AlbumTest, TestEmptyAlbum) {
    Playlist* test = new Playlist("Tyler, The Creator", "Smuckers", "Rap", "");
    EXPECT_EQ(test->GetAlbum(), "");
}

TEST(AlbumTest, TestAddSameSong) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Smuckers", "Tyler,the Creator", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Smuckers", "Tyler, The Creator", "Rap", "Goblin");
    Playlist* test3 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    EXPECT_EQ(testplay.GetSize(), 3);
}

TEST(AlbumTest, TestAddAlreadyExistingx4) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist* test3 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    Playlist* test4 = new Playlist("Smuckers", "Tyler, the Creator", "Rap", "Cherry Bomb");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);
    testplay.Add(test4);

    EXPECT_EQ(testplay.GetSize(), 1);
}

TEST(AlbumTest, TestRemoveUntilEmpty) {
    Playlist testplay;
    Playlist* test1 = new Playlist("Tyler, the Creator", "Smuckers", "Rap", "Cherry Bomb");
    Playlist* test2 = new Playlist("Tyler, the Creator", "Yonkers", "Rap", "Goblin");
    Playlist* test3 = new Playlist("Tyler, the Creator", "Wolf", "Rap", "Wolf");
    testplay.Add(test1);
    testplay.Add(test2);
    testplay.Add(test3);

    testplay.Remove("Smuckers");
    EXPECT_EQ(testplay.GetSize(), 2);
    testplay.Remove("Yonkers");
    testplay.Remove("Wolf");
    EXPECT_EQ(testplay.GetSize(), 0);
}

TEST(AlbumTest, TestRemoveNonExisting) {
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

#endif //__ALBUM_TEST_HPP__

