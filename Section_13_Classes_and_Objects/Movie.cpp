#include <iostream>
#include "Movie.hpp"

using namespace std;

Movie::Movie(string name, string rating, int watched)
    : name(name), rating(rating), watched(watched) {
}

//Implemention of the copy constructor
Movie::Movie(const Movie& source)
    : Movie{ source.name, source.rating, source.watched }
{
 
}

// Implementation of the destructor
Movie::~Movie() {
}

// Implementation of the display method
// should just insert the movie attributes to cout

void Movie::display() const
{
    cout << name << ", " << rating << ", " << watched << endl;
}