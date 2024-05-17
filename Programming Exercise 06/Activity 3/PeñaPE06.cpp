#include <iostream>
#include <list>
#include "Movie.h"

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::getline;
using std::endl;


int main(){
    Movie movie;

    string title, synopsis, mpaa_rating, genre;
    
    string fname, lname;
    char gender;

    cout << "Enter the title of the movie: ";
    getline(cin, title);
    movie.setTitle(title);

    cout << "Enter the synopsis of the movie: ";
    getline(cin, synopsis);
    movie.setSynopsis(synopsis);

    cout << "Enter the MPAA Rating of the movie: ";
    getline(cin, mpaa_rating);
    movie.setMPAA_rating(mpaa_rating);

    list<string> genres;

    int choice;

    do{
        cout << "What is the genre of the movie: ";
        getline(cin, genre);
        genres.push_back(genre);

        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        
        cin.ignore(); 


        if (!choice) {
            break;
        }
    }
    while(true);

    movie.setGenres(genres);

    Person person;

    list<Person> directors;

    do{

        cout << "What is the first name of the director: ";
        getline(cin, fname);

        cout << "What is the last name of the director: ";
        cin >> lname;
        
        cout << "What is the gender of the director (M or F): ";
        cin >> gender;

        person.setFname(fname);
        person.setLname(lname);
        person.setGender(gender);

        directors.push_back(person);

        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        
        cin.ignore(); 


        if (!choice) {
            break;
        }

    }while(true);

    movie.setDirectors(directors);

    list<Person> actors;

    do{

        cout << "What is the first name of the actor/actress: ";
        getline(cin, fname);

        cout << "What is the last name of the actor/actress: ";
        cin >> lname;
        
        cout << "What is the gender of the actor/actress(M or F): ";
        cin >> gender;

        person.setFname(fname);
        person.setLname(lname);
        person.setGender(gender);

        actors.push_back(person);

        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        
        cin.ignore(); 


        if (!choice) {
            break;
        }

    }while(true);

    movie.setActors(actors);
    cout << "========================================================================" << endl;
    cout << "\nTitle: " << movie.getTitle() << endl;
    cout << "\nSynopsis: " << movie.getSynopsis() << endl;
    cout << "\nMPAA Rating: " << movie.getMPAA_rating() << endl;

    list<string> displaygenres = movie.getGenres();

    cout << "\nGenres:";
    for(string genre : displaygenres){

        cout << ", " << genre;
    }

    list<Person> displaydirectors = movie.getDirectors();

    cout << "\n\nDirectors:" << endl;
    for(Person director : displaydirectors){

        cout << "Full name: "<< director.getFname() << " " << director.getLname() << endl;
        cout << "Gender: " << director.getGender() << endl;
        cout << endl;
    }
    
    list<Person> displayactors = movie.getActors();

    cout << "Actors:" << endl;
    for(Person actor : displayactors ){

        cout << "Full name: "<< actor.getFname() << " " << actor.getLname() << endl;
        cout << "Gender: " << actor.getGender() << endl;
        cout << endl;
    }


}