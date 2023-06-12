#ifndef MOVIE_HPP_INCLUDED
#define MOVIE_HPP_INCLUDED
#include <string>

using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watched; 
public:
    // Constructor - expects all 3 movie attributes
    Movie(string name, string rating, int watched);

    // Copy constructor 
    Movie(const Movie& source);

    // Destructor
    ~Movie();

    // Basic getters and setters for private attributes
    // implement these inline and watch your const-correctness

    void set_name(string name) { this->name = name; }
    string get_name() const { return name; }

    void set_rating(string rating) { this->rating = rating; }
    string get_rating() const { return rating; }

    void set_watched(int watched) { this->watched = watched; }
    int get_watched() const { return watched; }

    // Simply increment the watched attribute by 1
    void increment_watched() { ++watched; }

    // simply displays the movie information 
    void display() const;
};


#endif // MOVIE_HPP_INCLUDED