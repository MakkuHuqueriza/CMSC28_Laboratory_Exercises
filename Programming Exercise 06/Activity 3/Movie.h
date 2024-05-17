#include <iostream>
#include <string>
#include <list>
#include "Person.h"

using std::string;
using std::list;

/**
 * @class Movie
 * A class that represents a movie.
 * It represents a movie with its directors, actors, title, synopsis, MPAA rating, and genres.
 */
class Movie {

    private:
        list<Person> Directors;  ///< List of directors of the movie
        list<Person> Actors;     ///< List of actors in the movie
        string Title;            ///< Title of the movie
        string Synopsis;         ///< Synopsis of the movie
        string MPAA_rating;      ///< MPAA rating of the movie
        list<string> Genres;     ///< List of genres of the movie

    public:
        /**
         * Default constructor
         */
        Movie(){}

        /**
         * Returns the list of directors
         * 
         * @return {const list<Person>&} - List of directors
         */
        const list<Person>& getDirectors() const { return Directors; }

        /**
         * Returns the list of actors
         * 
         * @return {const list<Person>&} - List of actors
         */
        const list<Person>& getActors() const { return Actors; }

        /**
         * Returns the title of the movie
         * 
         * @return {const string&} - Title of the movie
         */
        const string& getTitle() const { return Title; }

        /**
         * Returns the synopsis of the movie
         * 
         * @return {const string&} - Synopsis of the movie
         */
        const string& getSynopsis() const { return Synopsis; }

        /**
         * Returns the MPAA rating of the movie
         * 
         * @return {const string&} - MPAA rating of the movie
         */
        const string& getMPAA_rating() const { return MPAA_rating; }

        /**
         * Returns the list of genres of the movie
         * 
         * @return {const list<string>&} - List of genres
         */
        const list<string>& getGenres()const { return Genres; }

        /**
         * Sets the list of directors
         * 
         * @param {const list<Person>&} directors - List of directors
         */
        void setDirectors(const list<Person>& directors) { Directors = directors; }

        /**
         * Sets the list of actors
         * 
         * @param {const list<Person>&} actors - List of actors
         */
        void setActors(const list<Person>& actors){ Actors = actors; }

        /**
         * Sets the title of the movie
         * 
         * @param {const string&} title - Title of the movie
         */
        void setTitle(const string& title){ Title = title; }

        /**
         * Sets the synopsis of the movie
         * 
         * @param {const string&} synopsis - Synopsis of the movie
         */
        void setSynopsis(const string& synopsis){ Synopsis = synopsis; }

        /**
         * Sets the MPAA rating of the movie
         * 
         * @param {const string&} mpaa_rating - MPAA rating of the movie
         */
        void setMPAA_rating(const string& mpaa_rating){ MPAA_rating = mpaa_rating; }

        /**
         * Sets the list of genres of the movie
         * 
         * @param {const list<string>&} genres - List of genres
         */
        void setGenres(const list<string>& genres){ Genres = genres; }

};