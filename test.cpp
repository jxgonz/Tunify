#include "gtest/gtest.h"

#include "album_test.hpp"
#include "playlist_test.hpp"
#include "Genre_test.hpp"
#include "Song_test.hpp"

using namespace std;


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
