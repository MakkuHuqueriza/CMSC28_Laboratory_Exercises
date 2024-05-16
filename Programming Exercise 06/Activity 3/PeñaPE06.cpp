#include <iostream>
#include "Movie.h"

using std::string;

int main(){
    Movie movie;
    
    string title;
    string synopsis;
    string mpaa_rating;
    string fname;
    string lname;
    char gender;
    string genre;
    
    int numofDirector;
    int nummofGenres;
    int numofActors;
    
    std::cout << "Input title of the movie: ";
    std::getline(std::cin, title);
    movie.setTitle(title);

    std::cout << "Input the synopsis of the movie: ";
    std::getline(std::cin, synopsis);
    movie.setSynopsis(synopsis);

    std::cout << "Input MPAA Rating of the movie: ";
    std::getline(std::cin, mpaa_rating);
    movie.setMPAA_rating(mpaa_rating);

    std::cout << "How many genres in the movie: ";
    std::cin >> nummofGenres;

    string genres[nummofGenres];

    for(int i = 0; i < nummofGenres; i++){
        std::cout << "Input genre of the movie: ";
        std::cin >> genres[i];
    }

    movie.setGenres(genres);

    std::cout << "How many director/s are there? ";
    std::cin >> numofDirector;

    Person directors[numofDirector];

    for(int i = 0; i < numofDirector; i++){

        std::cout << "Input full name of the director: ";
        std::cin >> fname;
        std::cin >> lname;
        
        std::cout << "Input gender of the director: ";
        std::cin >> gender;

        directors[i].setFname(fname);
        directors[i].setLname(lname);
        directors[i].setGender(gender);
    }

    movie.setDirectors(directors);

    std::cout << "How many actor/s are there? ";
    std::cin >> numofActors;

    Person actors[numofActors];

    for(int i = 0; i < numofActors; i++){
        
        std::cout << "Input full name of the actor/actress: ";
        std::cin >> fname;
        std::cin >> lname;
        
        std::cout << "Input gender of the actor/actress: ";
        std::cin >> gender;

        actors[i].setFname(fname);
        actors[i].setLname(lname);
        actors[i].setGender(gender);
    }

    movie.setActors(actors);
    
    std::cout << "Title: " << movie.getTitle() << std::endl;
    std::cout << "Synopsis: " << movie.getSynopsis() << std::endl;
    std::cout << "MPAA Rating: " << movie.getMPAA_rating() << std::endl;

    Person* displaydirectors = movie.getDirectors();

    std::cout << "Directors:" << std::endl;
    for(int i = 0; i < numofDirector; i++){
        std::cout << "Full name: "<< displaydirectors[i].getFname() << " " << displaydirectors[i].getLname() << std::endl;
        std::cout << "Gender: " << displaydirectors[i].getGender() << std::endl;
        std::cout << std::endl;
    }
    
    Person* displayactors = movie.getActors();

    std::cout << "Actors:" << std::endl;
    for(int i = 0; i < numofActors; i++){
        std::cout << "Full name: "<< displayactors[i].getFname() << " " << displayactors[i].getLname() << std::endl;
        std::cout << "Gender: " << displayactors[i].getGender() << std::endl;
        std::cout << std::endl;
    }

    string* displaygenres = movie.getGenres();

    std::cout << "Genres:";
    for(int i = 0; i < nummofGenres; i++){
        std::cout << " " << displaygenres[i];
    }
}