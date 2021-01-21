//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie83.h"

void zadanie83::findEven() {
    for (int i = 0; i < this -> n; ++i) {
        for (int j = 0; j < this -> m; ++j) {
            if (this -> vec[i][j] % 2 == 0){
                this -> evenNumbCount += 1;
            }
        }
    }
}

void zadanie83::showEvenSum() const{
    std::cout << "The count of even numbers is : " << this -> evenNumbCount << std::endl;
}

zadanie83::zadanie83() {
    this -> showVector();
    this -> findEven();
    this -> showEvenSum();
}
