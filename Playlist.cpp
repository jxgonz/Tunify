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

void Playlist::Add(Playlist play) {
    unsigned int i;
    for (i = 0; i < songs.size(); ++i) {
        if (play.GetSong() == songs.at(i).GetSong()) {
            if (play.GetArtist() == songs.at(i).GetArtist()) {
                if (play.GetGenre() == songs.at(i).GetGenre()) {
                    cout << "Song is already in playlist!" << endl;
                    return;
                }
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

int Playlist::GetSize() {
    return songs.size();
}

Playlist Playlist::getRec(int index) {
    return rec.at(index);
}
    
void Playlist::PrintPlaylist() {
    cout << "Playlist:" << endl;
    unsigned int i;
    for (i = 0; i < songs.size(); ++i) {
        cout << "(" <<i + 1 << ")" << endl;
        cout << "Song: " << songs.at(i).GetSong() << endl;
        cout << "Artist: " << songs.at(i).GetArtist() << endl;
        cout << "Genre: " << songs.at(i).GetGenre() << endl;
        cout << "Album: " << songs.at(i).GetAlbum() << endl << endl;
    }
}

void Playlist::GenerateRec() {
        rec.push_back(Playlist("Kanye West", "Heartless", "Rap/Hip-Hop", "808s & Heartbreak"));
        rec.push_back(Playlist("Tyler, the Creator", "Smuckers", "Rap/Hip-Hop", "Cherry Bomb"));
        rec.push_back(Playlist("Kendrick Lamar", "Rich Spirit", "Rap/Hip-Hop", "Mr.Morale & The Big Steppers"));
        rec.push_back(Playlist("Denzel Curry", "SUMO", "Rap/Hip-Hop", "TABOO"));
        rec.push_back(Playlist("Drake", "Nonstop", "Rap/Hip-Hop", "Scorpion"));

        rec.push_back(Playlist("Frank Ocean", "Nikes", "R&B/Soul", "Blonde"));
        rec.push_back(Playlist("H.E.R.", "Best Part", "R&B/Soul", "H.E.R."));
        rec.push_back(Playlist("Marvin Gaye", "Ain't No Mountain High Enough", "R&B/Soul", "United"));
        rec.push_back(Playlist("Summer Walker", "No Love", "R&B/Soul", "Still Over It"));
        rec.push_back(Playlist("Ne-Yo", "So Sick", "R&B/Soul", "In My Own Words"));

        rec.push_back(Playlist("Dua Lipa", "One Love", "Pop", ""));
        rec.push_back(Playlist("Justin Bieber", "Sorry", "Pop", "Purpose"));
        rec.push_back(Playlist("Ariana Grande", "positions", "Pop", "Positions"));
        rec.push_back(Playlist("Lil Nas X", "Old Town Road", "Pop", "7 EP"));
        rec.push_back(Playlist("Adele", "Hello", "Pop", "25"));

        rec.push_back(Playlist("George Strait", "Unwound", "Country", "Strait Out Of The Box"));
        rec.push_back(Playlist("Tim McGraw", "I Do But Don't", "Country", "Everywhere"));
        rec.push_back(Playlist("Blake Shelton", "At the House", "Country", ""));
        rec.push_back(Playlist("Lil Nas X", "Old Town Road", "Country", "7 EP"));
        rec.push_back(Playlist("Carrie Underwood", "Wasted", "Country", "Some Hearts"));

        rec.push_back(Playlist("Bad Bunny", "La Santa", "Latin", "YHLQMDLG"));
        rec.push_back(Playlist("J Balvin", "MOJAITA", "Latin", "OASIS"));
        rec.push_back(Playlist("Maluma", "La Cura", "Latin", "PAPI JUANCHO"));
        rec.push_back(Playlist("Daddy Yankee", "Gasolina", "Latin", "Barrio Fino"));
        rec.push_back(Playlist("Shakira", "Hips Don't Lie", "Latin", "Oral Fixation Vol. 2"));

        rec.push_back(Playlist("Iron Maiden", "Revelations", "Metal", "Piece of Mind"));
        rec.push_back(Playlist("Slipknot", "Duality", "Metal", "Vol. 3: The Subliminal Verses"));
        rec.push_back(Playlist("Linkin Park", "In the End", "Metal", "Hybrid Theory"));
        rec.push_back(Playlist("Motley Crue", "Kickstart My Heart", "Metal", "Dr.Feelgood"));
        rec.push_back(Playlist("System of a Down", "Chop Suey!", "Metal", "Toxicity"));

        rec.push_back(Playlist("The Rolling Stones", "Paint It, Black", "Rock", "Aftermath"));
        rec.push_back(Playlist("AC/DC", "Back In Black", "Rock", "Back In Black"));
        rec.push_back(Playlist("Nirvana", "Smells Like Teen Spirit", "Rock", "Nevermind"));
        rec.push_back(Playlist("Bon Jovi", "Livin' On A Prayer", "Rock", "Slippery When Wet"));
        rec.push_back(Playlist("Pink Floyd", "Money", "Rock", "The Dark Side of the Moon"));
}
