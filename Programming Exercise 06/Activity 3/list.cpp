#include <iostream>
#include <list>
#include <iterator>
#include "movietest.h"

using std::string;
using std::list;

int main(){
    Movie movie;

    string title;
    string synopsis;
    string mpaa_rating;
    string genre;
    string fname;
    string lname;
    char gender;

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

    list<string> genres;

    for(int i = 0; i < nummofGenres; i++){
        std::cout << "Input genre of the movie: ";
        std::cin >> genre;
        genres.push_back(genre);
    }

    movie.setGenres(genres);

    Person person;

    std::cout << "How many director/s are there? ";
    std::cin >> numofDirector;

    list<Person> directors;

    for(int i = 0; i < numofDirector; i++){

        std::cout << "Input full name of the director: ";
        std::cin >> fname;
        std::cin >> lname;
        
        std::cout << "Input gender of the director: ";
        std::cin >> gender;

        person.setFname(fname);
        person.setLname(lname);
        person.setGender(gender);

        directors.push_back(person);

    }

    movie.setDirectors(directors);

    std::cout << "How many actor/s are there? ";
    std::cin >> numofActors;

    list<Person> actors;

    for(int i = 0; i < numofDirector; i++){

        std::cout << "Input full name of the director: ";
        std::cin >> fname;
        std::cin >> lname;
        
        std::cout << "Input gender of the director: ";
        std::cin >> gender;

        person.setFname(fname);
        person.setLname(lname);
        person.setGender(gender);

        actors.push_back(person);
    }

    movie.setActors(actors);

    std::cout << "\nTitle: " << movie.getTitle() << std::endl;
    std::cout << "\nSynopsis: " << movie.getSynopsis() << std::endl;
    std::cout << "\nMPAA Rating: " << movie.getMPAA_rating() << std::endl;

    list<string> displaygenres = movie.getGenres();

    std::cout << "\nGenres:";
    for(int i = 0; i < nummofGenres; i++){

        list<string>::iterator it = displaygenres.begin();
        std::cout << " " << *it;
        ++it;
    }

    list<Person> displaydirectors = movie.getDirectors();

    std::cout << "\nDirectors:" << std::endl;
    for(int i = 0; i < numofDirector; i++){

        list<Person>::iterator it = displaydirectors.begin();

        std::cout << "Full name: "<< it->getFname() << " " << it->getLname() << std::endl;
        std::cout << "Gender: " << it->getGender() << std::endl;
        std::cout << std::endl;
        ++it;
    }
    
    list<Person> displayactors = movie.getActors();

    std::cout << "Actors:" << std::endl;
    for(int i = 0; i < numofActors; i++){

        list<Person>::iterator it = displayactors.begin();

        std::cout << "Full name: "<< it->getFname() << " " << it->getLname() << std::endl;
        std::cout << "Gender: " << it->getGender() << std::endl;
        std::cout << std::endl;
        ++it;
    }
}