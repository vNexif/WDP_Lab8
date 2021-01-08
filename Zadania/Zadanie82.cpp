//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie82.h"

void zadanie82::randomize() {
    Randomizer::generateRandom();
}

void zadanie82::showRandom() {
    for(int i = 0; i < this -> n; i++)
    {
        for(int j = 0; j < this -> m; j++)
        {
            std::cout << this -> vec[i][j] << " ";
        }
        std::cout<< std::endl;
    }
}

void zadanie82::calcSum() {
    for (int i = 0; i < this -> n; ++i) {
        for (int j = 0; j < this -> m; ++j) {
            this -> sum = this -> sum + this -> vec[i][j];
        }
    }
}

void zadanie82::showSum(){
    std::cout << "The total sum of values in the vector is : " << this -> sum << std::endl;
}

zadanie82::zadanie82() {
    zadanie82::randomize();
    zadanie82::showRandom();
    zadanie82::calcSum();
    zadanie82::showSum();
}
