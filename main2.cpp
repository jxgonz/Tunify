#include <iostream>
using namespace std;
#include "Playlist.hpp"

int main() {
    Playlist myplaylist;
    Playlist* song1 = new Playlist("Tyler, the Creator", "Smuckers", "Rap", "Cherry Bomb");
    Playlist* song2 = new Playlist("Kenrick Lamar", "N95", "Rap", "Mr.Morale");
    Playlist* song3 = new Playlist("Heartless", "Kanye", "Rap", "808");
    myplaylist.Add(song1);  
    myplaylist.Add(song2);
    myplaylist.Add(song3);

    myplaylist.PrintPlaylist();

    myplaylist.Remove("Smuckers");

    myplaylist.PrintPlaylist();

    delete song1;
    delete song2;
    delete song3;
}
