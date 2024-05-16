#include <iostream>
#include <string>
#include <list>
#include "Person.h"

using std::string;
using std::list;

class Movie : public Person{

    private:
        list<Person> Directors;
        list<Person> Actors;
        string Title;
        string Synopsis;
        string MPAA_rating;
        list<string> Genres;

    public:
        Movie(){}

        list<Person> getDirectors(){ return Directors; }
        list<Person> getActors(){ return Actors; }
        string getTitle(){ return Title; }
        string getSynopsis(){ return Synopsis; }
        string getMPAA_rating(){ return MPAA_rating; }
        list<string> getGenres(){ return Genres; }

        void setDirectors(const list<Person>& directors){ Directors = directors; }
        void setActors(const list<Person>& actors){ Actors = actors; }
        void setTitle(const string& title){ Title = title; }
        void setSynopsis(const string& synopsis){ Synopsis = synopsis; }
        void setMPAA_rating(const string& mpaa_rating){ MPAA_rating = mpaa_rating; }
        void setGenres(const list<string>& genres){ Genres = genres; }

};