//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie82.h"

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
    Randomizer::generateRandom();
    Randomizer::showVector();
    zadanie82::calcSum();
    zadanie82::showSum();
}
