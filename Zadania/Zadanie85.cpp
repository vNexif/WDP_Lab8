//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie85.h"


void zadanie85::calcUpperDiagSum() {
    for (int i = 0; i < 3; ++i) {
        this -> sumUpperDiag += this -> vec[i][i+1];
    }
    for (int i = 0; i < 2; ++i) {
        this -> sumUpperDiag += this -> vec[i][i+2];
    }
    this -> sumUpperDiag += this -> vec[0][3];
}

void zadanie85::calcLowerDiagSum() {
    for (int i = 0; i < 3; ++i) {
        this -> sumLowerDiag += this -> vec[i+1][i];
    }    for (int i = 0; i < 2; ++i) {
        this -> sumLowerDiag += this -> vec[i+2][i];
    }
    this -> sumUpperDiag += this -> vec[3][0];
}

void zadanie85::calcWholeVecSum() {
    for (int i = 0; i < this -> m; ++i) {
        for (int j = 0; j < this -> n; ++j) {
            this -> wholeVecSum += vec[i][j];
        }
    }
}

void zadanie85::calcDiagFromVecSum() {
    this -> sumFromVec = this -> wholeVecSum - ( this -> sumUpperDiag + this -> sumLowerDiag);
}

void zadanie85::calcDiagSum() {
    for (int i = 0; i < this -> n; ++i) {
        this -> sum += vec[i][i];
    }
}

void zadanie85::showDiagSum() const {
    std::cout << "The sum of the diagonal is : " << this -> sum << std::endl;
    std::cout << "The sum of the diagonal is (calculated) : " << this -> sumFromVec << std::endl;
    std::cout << "The sum above the diagonal is : " << this -> sumUpperDiag << std::endl;
    std::cout << "The sum below the diagonal is : " << this -> sumLowerDiag << std::endl;
    std::cout << "The vector sum is : " << this -> wholeVecSum << std::endl;

}

zadanie85::zadanie85() {
    //Define dimensions
    this -> m = 4, this -> n = 4;
    //Generate random numbers
    this -> generateRandom();
    this -> showVector();

    //Calc from the i == i thing
    this -> calcDiagSum();

    // Calculate the diagonal another way without if :)
    this -> calcUpperDiagSum();
    this -> calcLowerDiagSum();
    this -> calcWholeVecSum();
    this -> calcDiagFromVecSum();

    // Show that Sum
    this -> showDiagSum();
}
