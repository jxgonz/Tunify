[![CI](https://github.com/cs100/final-project-jgonz563-gyaye001-anguy702-osugi001/actions/workflows/main.yml/badge.svg)](https://github.com/cs100/final-project-jgonz563-gyaye001-anguy702-osugi001/actions/workflows/main.yml)

# Tunify
 
 > Authors: [Johan Gonzalez](https://github.com/jxgonz)\, 
 > [Girum Yaye](https://github.com/girumyaye)\, 
 > [Anthony Nguyen](https://github.com/anthonykpn)\, 
 > [Owen Sugi](https://github.com/osugi001)

## Project Description
 
Why?
 > We enjoy music and feel there is a need for a way for other to discover new artists, songs, or genres based on their preferences.

How?
 >We plan on building this application using the following tools:
 >   * [C++](https://www.cplusplus.com/) - We are programming using the language C++.
 >   * [VS Code](https://code.visualstudio.com/) - We are planning on building our application using VS code and then implementing it on hammer.

What?
 > We are going to implement the following features:
 > * user will input their music perferences (i.e. artist, songs, genre, subgenre) and a generated list of song recomendtions will output
 > * a filtering system where the user can filter out certain artists or genre from their recommendation.
 > * user can create a playlist where thay can add songs, delete songs, and rename playlist.
 > * user can access information about songs (i.e. song title, song length, artist, album)

## UML Diagram - Updated

![Tunify](https://user-images.githubusercontent.com/73373736/171927285-9a4b7082-8090-45e2-b0e5-6710d1be116d.jpg)

Class Description
 > Playlist Class:
 > * responsible for creating and editing a playlist
 > * contains a context function that has the context for the Recommender class
 
 > Recommender Class:
 > * a super class of Song, Genre, Artist, and Album
 > * contains the pure virtual function of Favorite for the concrete strategy classes to use
 
 > Song Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user's favorite song
 > * utilizes the Favorite algorithm to determine recommendation
 
 > Genre Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user's favorite genre
 > * utilizes the Favorite algorithm to determine recommendation
 
 > Artist Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user's favorite artist
 > * utilizes the Favorite algorithm to determine recommendation
 
 > Album Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user favorite album
 > * utilizes the Favorite algorithm to determine recommendation

## Strategy Design Pattern
> We picked this strategy pattern, because it was the solution that fit best with what our code is trying to achieve.
> 
> This design pattern makes it easier to write our code because if we were to add another algorithm in another update, our playlist and recommendation features wil not be altered.
> 
> In our strategy design pattern:
>  * Playlist class is the context class as it will have a reference to our Recommendation class
>  * Recommendation class is the compositor as it serve as a common interface for our song recommendation interface
>  * Song recommendation classes (song, artist, genre, album) are the concrete strategy as it implements the algorithm.
 
 ## Screenshots
First, we select the Recommendation option from Home Menu

![1 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924365-9667852e-de2d-444f-913a-f67097223996.png)

Song Recommendation based of Favorite Song

![2 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924429-3cce08ed-70fa-481f-901b-0df7732fe9d6.png)

Song Recommendation based of Favorite Artist

![3 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924442-ed25372c-29c9-4e31-a67e-1f687b5ab6ba.png)

Song Recommendation based of Favorite Genre

![4 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924472-630bf96c-c0b6-4a30-b8bf-258d4f89464f.png)

Song Recommendation based of Favorite Album

![5 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924537-c714384b-a859-433e-8f14-b53a0b5f29d4.png)

Then, we select the Edit Playlist option from Home Menu

![6 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924510-231a0c0c-5370-4cd3-9f9d-b4b4a81da50c.png)

Adding songs to a Playlist

![7 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924569-3bcc3675-4b97-4140-a4ea-1bcc6d3c7fa1.png)

Printing Playlist

![8 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924597-f3025980-21c4-4278-ba65-e442b4e5d28e.png)

Adding a song that already exists in playlist and removing a song that doesn't exist in playlist

![9 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924619-76888a27-6a58-47fe-902a-2b272faab512.png)

Removing an existing song from playlist

![10 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924648-a013e113-22d7-471e-abde-483e94f22711.png)

Exiting Program

![11 png (1366×768)](https://user-images.githubusercontent.com/73373736/171924671-b929f155-1866-4192-93f9-9eaafd2ea5f7.png)


 ## Installation/Usage
 Cloning Repository
 > To clone the github repository to your local machine, use the following command:
 ```
 git clone https://github.com/cs100/final-project-jgonz563-gyaye001-anguy702-osugi001.git
 ```
 CMake
 >After cloning the github repository and installing CMake to your machine, use the following command:
 ```
 cmake .
 make
 ./lab
 ```
 You're all set! Enjoy Tunify
 ## Testing
 > We created test cases for each of our classes using the CI Github Actions. We also used the googletest submodule to actually implement our test cases.
 
