#include <iostream>
#include "Song.hpp"

using namespace std;

int main() {
    Songs s;
    char choice;
    string word, song;
    cout<<"Menu:"<<endl;
    cout<<"1) Add a song to your list."<<endl;
    cout<<"2) Search for song using keyword for your recommendation."<<endl;
    do {
        cout<<"Enter 1 or 2: ";
        cin >> choice;
        switch(choice)
        {
            case '1':
                cout<<"Enter a song to be added to your list: ";
                getline(cin, song); // newline character intake
                getline(cin, song);
                s.add_song(song);
                break;
            case '2':
                cout<<"Enter a title, album, song, or artist do you want to be recommended: ";
                getline(cin, word); // newline character intake
                getline(cin, word);
                s.search_song(word);
                break;
            default:
                break;
        }
        cout<<"Continue (y/n)?: ";
        cin>>choice;
    } while(choice=='y');
    return 0;
}
