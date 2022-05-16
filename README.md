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

![Tunify - UML Diagram](https://user-images.githubusercontent.com/73373736/168551323-1a68ae2d-2680-4b86-95bb-4bbfb5230824.png)

Class Description
 > Playlist Class:
 > * a super class of Recommender
 > * responsible for creating and editing a playlist
 
 > Recommender Class:
 > * a subclass of Playlist
 > * a super class of Song, Genre, Artist, and Album
 > * responsible for printing the generated recommendation
 
 > Song Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user's favorite song
 > * utilizes various algorithms to determine recommendation
 
 > Genre Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user's favorite genre
 > * utilizes various algorithms to determine recommendation
 
 > Artist Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user's favorite artist
 > * utilizes various algorithms to determine recommendation
 
 > Album Class:
 > * a subclass of Recommender
 > * generates a list of song recommendation based off user favorite album
 > * utilizes various algorithms to determine recommendation

## Strategy Design Pattern
> We picked this strategy pattern, because it was the solution that fit best with what our code is trying to achieve.
> In our strategy design pattern:
>  * Playlist class is the composition as it will reference from our Recommendation class
>  * Recommendation class is the compositor as it serve as a common interface for our song recommendation interface
>  * Song recommendation classes (song, artist, genre, album) are the concrete strategy it implements the algorithm.
> This design pattern makes it easier to write our code because if we were to add another algorithm in another update, our playlist and recommendation features wil not be altered.
 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
