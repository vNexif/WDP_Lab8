//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie84.h"


void zadanie84::fetchUserInput() {
    std::cout << "Input the row number(0-4) You want to sum :", std::cin >> this -> usrIn;
    try {
        if (std::cin.fail()){
            throw "Unexpected input error";
        }
        if (this -> usrIn < 0 || this -> usrIn > 4){
            throw "The inputted value is outside the given range";

        }
    }
    catch ( char* error){
        std::cerr << error << std::endl;
        exit( 3 );
    }
}


void zadanie84::calcRowSum() {
    for (int i = 0; i < this -> n; ++i) {
        for (int j = 0; j < this -> m; ++j) {
            if ( i == this -> usrIn ){
                this -> rowSum += vec[i][j];
            }
        }
    }
}

void zadanie84::showRowSum() const {
    std::cout << "The sum of " << this -> usrIn << " row is : " << this -> rowSum << std::endl;
}

zadanie84::zadanie84() {
    this -> showVector();
    this -> fetchUserInput();
    this -> calcRowSum();
    this -> showRowSum();

}



