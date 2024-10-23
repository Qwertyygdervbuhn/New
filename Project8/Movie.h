#pragma once
class Movie
{
private:
    char* name;
    double time;
    int year;
    char* director;  
    float rating;    

public:
    Movie();  
    Movie(const char* n, double t, int y, const char* dir, float r); 
    Movie(const Movie& obj); 
    ~Movie();  

    void Print();  
};
