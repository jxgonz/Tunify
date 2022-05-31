#include "Playlist.hpp"

Playlist::Playlist() {
    this -> song = "none";
    this -> artist = "none";
    this -> genre = "none";
    this -> album = "none";
}

Playlist::Playlist(string artist, string song, string genre, string album) {
    this -> artist = artist;
    this -> song = song;
    this -> genre = genre;
    this -> album = album;
}

void Playlist::Add(Playlist* play) {
    Playlist* s;
    for (unsigned int i = 0; i < songs.size(); ++i) {
        s = songs.at(i);
        if (play->GetSong() == s->GetSong()) {
            if (play->GetArtist() == s->GetArtist()) {
                cout << "Song is already in playlist!" << endl;
                return;
            }
        }
    }
    songs.push_back(play);
}

void Playlist::Remove(string songName) {
    Playlist* s;
    for (unsigned int i = 0; i < songs.size(); ++i) {
        s = songs.at(i);
        if (songName == s->GetSong()) {
            songs.erase(songs.begin() + i);
            return;
        }
    }
    cout << songName << " is not in playlist!" << endl;
}

void Playlist::FavRec() {
     vector<map<pair<string, string>, string>> Genre;
     r->Favorite(Genre);
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

int Playlist::GetSize() {
    return songs.size();
}
    
void Playlist::PrintPlaylist() {
    cout << endl << "Playlist:" << endl;
    Playlist* s;
    for (unsigned int i = 0; i < songs.size(); ++i) {
        s = songs.at(i);
        cout << "(" << i + 1 << ")" << endl;
        cout << "Song: " << s->GetSong() << endl;
        cout << "Artist: " << s->GetArtist() << endl;
        cout << "Genre: " << s->GetGenre() << endl;
        cout << "Album: " << s->GetAlbum() << endl << endl;
    }
}
