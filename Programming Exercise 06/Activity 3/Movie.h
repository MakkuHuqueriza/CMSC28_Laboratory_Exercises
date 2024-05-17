#include <iostream>
#include <string>
#include <list>
#include "Person.h"

using std::string;
using std::list;

class Movie : private Person{

    private:
        list<Person> Directors;
        list<Person> Actors;
        string Title;
        string Synopsis;
        string MPAA_rating;
        list<string> Genres;

    public:
        Movie(){}

        const list<Person>& getDirectors() const { return Directors; }
        const list<Person>& getActors() const { return Actors; }
        const string& getTitle() const { return Title; }
        const string& getSynopsis() const { return Synopsis; }
        const string& getMPAA_rating() const { return MPAA_rating; }
        const list<string>& getGenres()const { return Genres; }

        void setDirectors(const list<Person>& directors) { Directors = directors; }
        void setActors(const list<Person>& actors){ Actors = actors; }
        void setTitle(const string& title){ Title = title; }
        void setSynopsis(const string& synopsis){ Synopsis = synopsis; }
        void setMPAA_rating(const string& mpaa_rating){ MPAA_rating = mpaa_rating; }
        void setGenres(const list<string>& genres){ Genres = genres; }

};