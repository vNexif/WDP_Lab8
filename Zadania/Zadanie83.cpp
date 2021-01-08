//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie83.h"

void zadanie83::sumEven(int_fast32_t x) {
    this -> evenNumbSum += x;
}


void zadanie83::findEven() {
    for (int i = 0; i < this -> n; ++i) {
        for (int j = 0; j < this -> m; ++j) {
            if (this -> vec[i][j] % 2 == 0){
                this -> sumEven(vec[i][j]);
            }
        }
    }
}

void zadanie83::showEvenSum() const{
    std::cout << "The sum of even numbers is : " << this -> evenNumbSum << std::endl;
}

zadanie83::zadanie83() {
    this -> findEven();
    this -> showEvenSum();
}
