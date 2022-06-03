#ifndef __PLAYLIST_HPP__
#define __PLAYLIST_HPP__
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include "Recommender.hpp"
using namespace std;

class Playlist {
   private:
      string song;
      string artist;
      string genre;
      string album;
      vector<Playlist*> songs;
      Recommender* r;  

   public:
      Playlist() {
         this -> song = "none";
         this -> artist = "none";
         this -> genre = "none";
         this -> album = "none";
      }

      Playlist(string artist, string song, string genre, string album) {
         this -> artist = artist;
         this -> song = song;
         this -> genre = genre;
         this -> album = album;
      }

      Playlist(Recommender* const a) : r(a) {}

      void Add(Playlist* play) {
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
      void Remove(string songName) {
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

      void FavRec() {
         vector<map<pair<string, string>, string>> Genre = GenerateRec();
         r->Favorite(Genre);
      }

      const string GetSong() const {
         return song;
      }

      const string GetArtist() const {
         return artist;
      }

      const string GetGenre() const {
         return genre;
      }

      const string GetAlbum() const {
         return album;
      }

      int GetSize() {
	 return songs.size();
      }

      void PrintPlaylist() {
         cout << endl << "Playlist:" << endl;
         Playlist* s;
         for (unsigned int i = 0; i < songs.size(); ++i) {
            s = songs.at(i);
            cout << "(" << i + 1 << ")" << endl;
            cout << "Song: " << s->GetSong() << endl << endl;
            cout << "Artist: " << s->GetArtist() << endl;
            cout << "Genre: " << s->GetGenre() << endl;
            cout << "Album: " << s->GetAlbum() << endl << endl;
         }
      }

      vector<map<pair<string, string>, string>> GenerateRec() {
         vector<map<pair<string, string>, string>> Genre;
         map<pair<string, string>, string> Rap;
         Rap.insert(pair<pair<string, string>, string> (pair<string, string>("808s & Heartbreak", "Kanye West"), "Heartless"));
         Rap.insert(pair<pair<string, string>, string> (pair<string, string>("Cherry Bomb", "Tyler, the Creator"), "Smuckers"));
         Rap.insert(pair<pair<string, string>, string> (pair<string, string>("Mr.Morale & The Big Steppers", "Kendrick Lamar"), "Rich Spirit"));
         Rap.insert(pair<pair<string, string>, string> (pair<string, string>("TABOO", "Denzel Curry"), "SUMO"));
         Rap.insert(pair<pair<string, string>, string> (pair<string, string>("Scorpion", "Drake"), "Nonstop"));
         Genre.push_back(Rap);

         map<pair<string, string>, string> RB;
         RB.insert(pair<pair<string, string>, string> (pair<string, string>("Blonde", "Frank Ocean"), "Nikes"));
         RB.insert(pair<pair<string, string>, string> (pair<string, string>("H.E.R", "H.E.R"), "Best Part"));
         RB.insert(pair<pair<string, string>, string> (pair<string, string>("United", "Martin Gaye"), "Ain't No Mountain High Enough"));
         RB.insert(pair<pair<string, string>, string> (pair<string, string>("Still Over It", "Summer Walker"), "No Love"));
         RB.insert(pair<pair<string, string>, string> (pair<string, string>("In My Own Words", "Ne-Yo"), "So Sick"));
         Genre.push_back(RB);

         map<pair<string, string>, string> Pop;;
         Pop.insert(pair<pair<string, string>, string> (pair<string, string>("Dua Lipa", "Dua Lipa"), "One Kiss"));
         Pop.insert(pair<pair<string, string>, string> (pair<string, string>("Purpose", "Justin Bieber"), "Sorry"));
         Pop.insert(pair<pair<string, string>, string> (pair<string, string>("Positions", "Ariana Grande"), "positions"));
         Pop.insert(pair<pair<string, string>, string> (pair<string, string>("7 EP", "Lil Nas X"), "Old Town Road"));
         Pop.insert(pair<pair<string, string>, string> (pair<string, string>("25", "Adele"), "Hello"));
         Genre.push_back(Pop);

         map<pair<string, string>, string> Country;
         Country.insert(pair<pair<string, string>, string> (pair<string, string>("Strait Out Of The Box", "George Strait"), "Unwound"));
         Country.insert(pair<pair<string, string>, string> (pair<string, string>("Everywhere", "Tim McGraw"), "I Do But Don't"));
         Country.insert(pair<pair<string, string>, string> (pair<string, string>("Blake Shelton", "Blake Shelton"), "At the House"));
         Country.insert(pair<pair<string, string>, string> (pair<string, string>("7 EP", "Lil Nas X"), "Old Town Road"));
         Country.insert(pair<pair<string, string>, string> (pair<string, string>("Some Hearts", "Carrie Underwood"), "Wasted"));
         Genre.push_back(Country);

         map<pair<string, string>, string> Latin;
         Latin.insert(pair<pair<string, string>, string> (pair<string, string>("YHLQMDLG", "Bad Bunny"), "La Santa"));
         Latin.insert(pair<pair<string, string>, string> (pair<string, string>("OASIS", "J Balvin"), "MOJAITA"));
         Latin.insert(pair<pair<string, string>, string> (pair<string, string>("PAPI JUANCHO", "Maluma"), "La Cura"));
         Latin.insert(pair<pair<string, string>, string> (pair<string, string>("Barrio Fino", "Daddy Yankee"), "Gasolina"));
         Latin.insert(pair<pair<string, string>, string> (pair<string, string>("Oral Fixation Vol. 2", "Shakira"), "Hips Don't Lie"));
         Genre.push_back(Latin);

         map<pair<string, string>, string> Metal;
         Metal.insert(pair<pair<string, string>, string> (pair<string, string>("Piece of Mind", "Iron Maiden"), "Revelation"));
         Metal.insert(pair<pair<string, string>, string> (pair<string, string>("Vol. 3: The Subliminal Verses", "Slipknot"), "Duality"));
         Metal.insert(pair<pair<string, string>, string> (pair<string, string>("Hybrid Theory", "Linkin Park"), "In the End"));
         Metal.insert(pair<pair<string, string>, string> (pair<string, string>("Dr.Feelgood", "Motley Crue"), "Kickstart My Heart"));
         Metal.insert(pair<pair<string, string>, string> (pair<string, string>("Toxicity", "System of a Down"), "Chop Suey!"));
         Genre.push_back(Metal);

         map<pair<string, string>, string> Rock;
         Rock.insert(pair<pair<string, string>, string> (pair<string, string>("Aftermath", "The Rolling Stones"), "Paint It, Black"));
         Rock.insert(pair<pair<string, string>, string> (pair<string, string>("Back In Black", "AC/DC"), "Back In Black"));
         Rock.insert(pair<pair<string, string>, string> (pair<string, string>("Nevermind", "Nirvana"), "Smells Like Teen Spirit"));
         Rock.insert(pair<pair<string, string>, string> (pair<string, string>("Slippery When Wet", "Bon Jovi"), "Livin' On A Prayer"));
         Rock.insert(pair<pair<string, string>, string> (pair<string, string>("The Dark Side of the Moon", "Pink Floyd"), "Money"));
         Genre.push_back(Rock);

         return Genre;
      }
};

#endif //__PLAYLIST_HPP__
