
#include <cstdlib> //for rand()
#include "Dice.hpp"

        Dice::Dice(int sides){
            this->sides = sides;
        }

        int Dice::roll(){
        this->num = rand() % sides + 1;
        return this->num;
        }
