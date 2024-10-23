#include <iostream>
#include "Movie.h"
using namespace std;

int main() {
    Movie* arrptr[2]{
        new Movie("Avatar", 2.10, 2009, "James Cameron", 8.5),
        new Movie("Bad Boys", 2.40, 1998, "Michael Bay", 7.2)
    };

    for (int i = 0; i < 2; i++) {
        arrptr[i]->Print();
    }

    for (int i = 0; i < 2; i++) {
        delete arrptr[i];
    }


}
