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

Playlist* Playlist::getRec(int index) {
    return rec.at(index);
}

int Playlist::getRecSize() {
    return rec.size();
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

void Playlist::GenerateRec() {
        rec.push_back(new Playlist("Kanye West", "Heartless", "Rap/Hip-Hop", "808s & Heartbreak"));
        rec.push_back(new Playlist("Tyler, the Creator", "Smuckers", "Rap/Hip-Hop", "Cherry Bomb"));
        rec.push_back(new Playlist("Kendrick Lamar", "Rich Spirit", "Rap/Hip-Hop", "Mr.Morale & The Big Steppers"));
        rec.push_back(new Playlist("Denzel Curry", "SUMO", "Rap/Hip-Hop", "TABOO"));
        rec.push_back(new Playlist("Drake", "Nonstop", "Rap/Hip-Hop", "Scorpion"));

        rec.push_back(new Playlist("Frank Ocean", "Nikes", "R&B/Soul", "Blonde"));
        rec.push_back(new Playlist("H.E.R.", "Best Part", "R&B/Soul", "H.E.R."));
        rec.push_back(new Playlist("Marvin Gaye", "Ain't No Mountain High Enough", "R&B/Soul", "United"));
        rec.push_back(new Playlist("Summer Walker", "No Love", "R&B/Soul", "Still Over It"));
        rec.push_back(new Playlist("Ne-Yo", "So Sick", "R&B/Soul", "In My Own Words"));

        rec.push_back(new Playlist("Dua Lipa", "One Kiss", "Pop", "Dua Lipa"));
        rec.push_back(new Playlist("Justin Bieber", "Sorry", "Pop", "Purpose"));
        rec.push_back(new Playlist("Ariana Grande", "positions", "Pop", "Positions"));
        rec.push_back(new Playlist("Lil Nas X", "Old Town Road", "Pop", "7 EP"));
        rec.push_back(new Playlist("Adele", "Hello", "Pop", "25"));

        rec.push_back(new Playlist("George Strait", "Unwound", "Country", "Strait Out Of The Box"));
        rec.push_back(new Playlist("Tim McGraw", "I Do But Don't", "Country", "Everywhere"));
        rec.push_back(new Playlist("Blake Shelton", "At the House", "Country", "Blake Shelton"));
        rec.push_back(new Playlist("Lil Nas X", "Old Town Road", "Country", "7 EP"));
        rec.push_back(new Playlist("Carrie Underwood", "Wasted", "Country", "Some Hearts"));

        rec.push_back(new Playlist("Bad Bunny", "La Santa", "Latin", "YHLQMDLG"));
        rec.push_back(new Playlist("J Balvin", "MOJAITA", "Latin", "OASIS"));
        rec.push_back(new Playlist("Maluma", "La Cura", "Latin", "PAPI JUANCHO"));
        rec.push_back(new Playlist("Daddy Yankee", "Gasolina", "Latin", "Barrio Fino"));
        rec.push_back(new Playlist("Shakira", "Hips Don't Lie", "Latin", "Oral Fixation Vol. 2"));

        rec.push_back(new Playlist("Iron Maiden", "Revelations", "Metal", "Piece of Mind"));
        rec.push_back(new Playlist("Slipknot", "Duality", "Metal", "Vol. 3: The Subliminal Verses"));
        rec.push_back(new Playlist("Linkin Park", "In the End", "Metal", "Hybrid Theory"));
        rec.push_back(new Playlist("Motley Crue", "Kickstart My Heart", "Metal", "Dr.Feelgood"));
        rec.push_back(new Playlist("System of a Down", "Chop Suey!", "Metal", "Toxicity"));

        rec.push_back(new Playlist("The Rolling Stones", "Paint It, Black", "Rock", "Aftermath"));
        rec.push_back(new Playlist("AC/DC", "Back In Black", "Rock", "Back In Black"));
        rec.push_back(new Playlist("Nirvana", "Smells Like Teen Spirit", "Rock", "Nevermind"));
        rec.push_back(new Playlist("Bon Jovi", "Livin' On A Prayer", "Rock", "Slippery When Wet"));
        rec.push_back(new Playlist("Pink Floyd", "Money", "Rock", "The Dark Side of the Moon"));
}
