#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie() {
    name = nullptr;
    time = 0.0;
    year = 0;
    director = nullptr;  
    rating = 0.0;        
}

Movie::Movie(const char* n, double t, int y, const char* dir, float r) {
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    time = t;
    year = y;

    
    director = new char[strlen(dir) + 1];
    strcpy_s(director, strlen(dir) + 1, dir);

 
    rating = r;
}

Movie::Movie(const Movie& obj) {
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);
    time = obj.time;
    year = obj.year;

   
    director = new char[strlen(obj.director) + 1];
    strcpy_s(director, strlen(obj.director) + 1, obj.director);

    rating = obj.rating;  
}

Movie::~Movie() {
    delete[] name;
    delete[] director;  
    cout << "Destructor called" << endl;
}

void Movie::Print() {
    cout << "Name: " << name << "\t"
        << "Time: " << time << "\t"
        << "Year: " << year << "\t"
        << "Director: " << director << "\t"
        << "Rating: " << rating << endl;
}
