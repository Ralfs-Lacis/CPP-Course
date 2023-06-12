#ifndef MOVIES_HPP_INCLUDED
#define MOVIES_HPP_INCLUDED
#include <vector>
#include <string>
#include "Movie.hpp"

class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();             // Constructor
    ~Movies();          // Destructor

    bool add_movie(string name, string rating, int watched);

    bool increment_watched(string name);

    void display() const;
};

#endif // MOVIES_HPP_INCLUDED