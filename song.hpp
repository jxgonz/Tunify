#ifndef SONG_HPP
#define SONG_HPP
#include <bits/stdc++.h>

using namespace std;

class Songs {
    vector <string> songs_list;
    public:
    void add_song(string song) {
        songs_list.push_back(song);
        cout<<song<<" Song added to your list."<<endl;
    }
    void search_song(string word) {
        int i = 1;
        // case insensitive search
         transform(word.begin(), word.end(), word.begin(), ::tolower);
         for (string song:songs_list) {
            string song_in_list = song;
            transform(song_in_list.begin(), song_in_list.end(), song_in_list.begin(), ::tolower);
            if(song_in_list.find(word) != string::npos) // if found
               cout<<i++<<".)"<<song<<endl;
}
       if(i==1)    // if there are no related songs found
        cout<<"There are no related songs found."<<endl;
}
};
#endif /* SONG_HPP */
