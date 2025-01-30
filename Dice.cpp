#include <iostream>
#include <cstdlib> //for rand()
#include <ctime>
using namespace std;

class dice{
    public:
        int sides;

        dice(int sd){
            sd = sides;
        }

        int roll(){
        return rand() % sides + 1;
        }
};
