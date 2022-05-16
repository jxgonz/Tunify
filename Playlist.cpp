#include "Playlist.hpp"

Playlist::Playlist(string song, string artist, string genre, string album) {
    this -> song = song;
    this -> artist = artist;
    this -> genre = genre;
    this -> album = album;
    next = nullptr;
}

void Playlist::Add(Playlist* play) {
    songs[0] = play;
}

void Playlist::Remove() {
    cout << "FIXME: Implement Remove() function!!!" << endl;
}

const string Playlist::GetSong() const {
    return song;
}

const string Playlist::GetArtist() const {
    return artist;
}

const string Playlist::GetGenre() const {
    return genre;
}

const string Playlist::GetAlbum() const {
    return album;
}
    
void Playlist::PrintPlaylist() {
    cout << "Playlist:" << endl;
    cout << songs[0] -> GetSong() << endl;
    cout << songs[0] -> GetArtist() << endl;
    cout << songs[0] -> GetGenre() << endl;
    cout << songs[0] -> GetAlbum() << endl;
}
