/*Programming Exercise 06 - OOP 2 Activity 3 - MARK JAILY H. PEÑA
 This program implements object-oriented programming with the use of list */

#include <iostream>
#include <list>
#include "Movie.h"
#include <windows.h>

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::getline;
using std::endl;

int main(){
    Movie movie;  // Create a Movie object

    string title, synopsis, mpaa_rating, genre; 
    
    string fname, lname; 
    char gender;
    
    // Display program details
    cout << "\n=================================================================================================================" << endl;
    cout << "                              OOP 2 Activity 3 - Programming Exercises 06"<< endl;;
    cout << "                                       Created by Mark Jaily H. Pena" << endl;
    cout << "                               Date done: 5/17/2024       Subject: CMSC 28" << endl << endl;
    cout << "This program will ask the user to input the details of a movie such as the title, synopsis, MPAA rating, genres," << endl; 
    cout << "directors, and actors." << endl;
    cout << "=================================================================================================================" << std::endl << std::endl; 
    
    // Prompt user for movie title
    cout << "Enter the title of the movie: ";
    getline(cin, title);
    movie.setTitle(title);  // Set movie title

    // Prompt user for movie synopsis
    cout << "Enter the synopsis of the movie: ";
    getline(cin, synopsis);
    movie.setSynopsis(synopsis);  // Set movie synopsis

    // Prompt user for movie MPAA rating
    cout << "Enter the MPAA Rating of the movie: ";
    getline(cin, mpaa_rating);
    movie.setMPAA_rating(mpaa_rating);  // Set movie MPAA rating

    list<string> genres;  // Create a list to store movie genres

    int choice;

    // Loop to get all genres of the movie
    do{
        // Prompt user for movie genre
        cout << "What is the genre of the movie: ";
        getline(cin, genre);
        genres.push_back(genre);  // Add genre to the list

        // Ask user if there are more genres
        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        
        cin.ignore();  // Clear input buffer

        // Break loop if user has no more genres
        if (!choice) {
            break;
        }
    }
    while(true);

    movie.setGenres(genres);  // Set movie genres

    Person person;  // Create a Person object

    list<Person> directors;  // Create a list to store directors

    // Loop to get all directors of the movie
    do{
        // Prompt user for director's first name
        cout << "What is the first name of the director: ";
        getline(cin, fname);

        // Prompt user for director's last name
        cout << "What is the last name of the director: ";
        cin >> lname;
        
        // Prompt user for director's gender
        cout << "What is the gender of the director (M or F): ";
        cin >> gender;

        person.setFname(fname);  // Set director's first name
        person.setLname(lname);  // Set director's last name
        person.setGender(gender);  // Set director's gender

        directors.push_back(person);  // Add director to the list

        // Ask user if there are more directors
        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        
        cin.ignore();  // Clear input buffer

        // Break loop if user has no more directors
        if (!choice) {
            break;
        }
    }while(true);

    movie.setDirectors(directors);  // Set movie directors

    list<Person> actors;  // Create a list to store actors

    // Loop to get all actors of the movie
    do{
        // Prompt user for actor's first name
        cout << "What is the first name of the actor/actress: ";
        getline(cin, fname);

        // Prompt user for actor's last name
        cout << "What is the last name of the actor/actress: ";
        cin >> lname;
        
        // Prompt user for actor's gender
        cout << "What is the gender of the actor/actress(M or F): ";
        cin >> gender;

        person.setFname(fname);  // Set actor's first name
        person.setLname(lname);  // Set actor's last name
        person.setGender(gender);  // Set actor's gender

        actors.push_back(person);  // Add actor to the list

        // Ask user if there are more actors
        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        
        cin.ignore();  // Clear input buffer

        // Break loop if user has no more actors
        if (!choice) {
            break;
        }
    }while(true);

    movie.setActors(actors);  // Set movie actors
    
    // Display movie details
    system("cls");
    cout << "\n=================================================================================================================" << endl;
    cout << "                                           Movie Details:" << endl; 
    cout << "\n=================================================================================================================" << endl;
    cout << "\nTitle: " << movie.getTitle() << endl;
    cout << "\nSynopsis: " << movie.getSynopsis() << endl;
    cout << "\nMPAA Rating: " << movie.getMPAA_rating() << endl;

    list<string> displaygenres = movie.getGenres();

    // Display movie genres
    cout << "\nGenres:" << endl;
    for(string genre : displaygenres){
        cout << "* " << genre << endl;
    }

    list<Person> displaydirectors = movie.getDirectors();

    // Display movie directors
    cout << "\nDirectors:" << endl;
    for(Person director : displaydirectors){
        cout << "Full name: "<< director.getFname() << " " << director.getLname() << endl;
        cout << "Gender: " << director.getGender() << endl;
        cout << endl;
    }
    
    list<Person> displayactors = movie.getActors();

    // Display movie actors
    cout << "Actors:" << endl;
    for(Person actor : displayactors ){
        cout << "Full name: "<< actor.getFname() << " " << actor.getLname() << endl;
        cout << "Gender: " << actor.getGender() << endl;
        cout << endl;
    }
}