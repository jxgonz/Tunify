#include "Playlist.hpp"

Playlist::Playlist() {
    this -> song = "none";
    this -> artist = "none";
    this -> genre = "none";
    this -> album = "none";
}

Playlist::Playlist(string song, string artist, string genre, string album) {
    this -> song = song;
    this -> artist = artist;
    this -> genre = genre;
    this -> album = album;
}

void Playlist::Add(Playlist play) {
    unsigned int i;
    for (i = 0; i < songs.size(); ++i) {
        if (play.GetSong() == songs.at(i).GetSong()) {
            if (play.GetArtist() == songs.at(i).GetArtist()) {
                cout << "Song is already in playlist!" << endl;
                return;
            }
        }
    }
    songs.push_back(play);
}

void Playlist::Remove(string songName) {
    vector<Playlist>::iterator iter = songs.begin();
    unsigned int i;
    for (i = 0; i < songs.size(); ++i) {
        if (songName == songs.at(i).GetSong()) {
            songs.erase(iter);
            return;
        }
        else {
            ++iter;
        }
    }
    cout << "Song cannot be found in playlist!" << endl;
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

int Playlist::size() {
    return songs.size();
}
    
void Playlist::PrintPlaylist() {
    cout << "Playlist:" << endl;
    unsigned int i;
    for (i = 0; i < songs.size(); ++i) {
        cout << "(" <<i + 1 << ")" << endl;
        cout << "Song: "  << songs.at(i).GetSong() << endl;
        cout << "Artist: "  <<songs.at(i).GetArtist() << endl;
        cout << "Genre: "  <<songs.at(i).GetGenre() << endl;
        cout << "Album: "  << songs.at(i).GetAlbum() << endl << endl;
    }
}
