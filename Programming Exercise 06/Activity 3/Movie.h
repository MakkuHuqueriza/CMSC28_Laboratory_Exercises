#include <iostream>
#include <string>
#include "Person.h"

using std::string;

class Movie : public Person{

    private:
        Person* Directors;
        Person* Actors;
        string Title;
        string Synopsis;
        string MPAA_rating;
        string* Genres;

    public:
        Movie(){}

        Person* getDirectors(){ return Directors; }
        Person* getActors(){ return Actors; }
        string getTitle(){ return Title; }
        string getSynopsis(){ return Synopsis; }
        string getMPAA_rating(){ return MPAA_rating; }
        string* getGenres(){ return Genres; }

        void setDirectors(Person* directors){ Directors = directors; }
        void setActors(Person* actors){ Actors = actors; }
        void setTitle(const string& title){ Title = title; }
        void setSynopsis(const string& synopsis){ Synopsis = synopsis; }
        void setMPAA_rating(const string& mpaa_rating){ MPAA_rating = mpaa_rating; }
        void setGenres(string* genres){ Genres = genres; }

};