#ifndef __ALBUM_HPP__
#define __ALBUM_HPP__
#include "Recommender.hpp"
#include <map>
#include <iterator>

class Album : public Recommender {
 public:
    Album() {}


    void Favorite(vector<map<pair<string, string>, string>> Genre) override {
        cout << endl;
        cout << "What is your favorite album?" << endl;
        string album;
        cin.ignore();
        getline(cin, album);

        
        cout << "What genre is the album in?" << endl;
        cout << "1. Rap/Hip-Hip    2. R&B/Soul    3. Pop    4. Country    5. Latin    6. Metal    7.Rock" << endl;
        int index;
        cin >> index;
        --index;

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

        map<pair<string, string>, string>::iterator iter;
        int i = 1;
        cout << "Here's a List of Recommended Albums:" << endl;
        for (iter = Genre.at(index).begin(); iter != Genre.at(index).end(); ++iter) {
            cout << "   (" << i << ") '" << iter ->first.first << "' by " << iter -> first.second << endl;
            cout << "           '" << iter->second << "' is a song in " << iter->first.first << endl << endl;
            ++i;
        }
    }   
};

#endif
