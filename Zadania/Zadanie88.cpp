//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie88.h"

void zadanie88::GenerateMatrixB() {
    this -> MatrixB = Randomizer::generateRandom( this -> MatrixB_y, this -> MatrixB_x, this -> MatrixB_a, this -> MatrixB_b );

    //Just for testing cuz too big ;v
    Randomizer::showVector( this -> MatrixB, this -> MatrixB_y, this -> MatrixB_x );
}

void zadanie88::PushCordsToMatrixA(int_fast32_t n, int_fast32_t y, int_fast32_t x) {
    try {
        MatrixA[n] = std::vector<int_fast32_t>{y,x};
    }
    catch (std::out_of_range &e) {
        std::cerr << e.what() << std::endl;
    }
}

void zadanie88::CheckIfZero() {
    int_fast32_t n{0};
    for (int i = 0; i < this -> MatrixB_y; ++i) {
        for (int j = 0; j < this -> MatrixB_x; ++j) {
            if ( MatrixB[i][j] == 0 ) {
                PushCordsToMatrixA(n, i, j );
                n += 1;
            }
        }
    }
    std::cout << std::endl << std::endl;
    std::cout << "y,x" << std::endl;
    Randomizer::showVector( this -> MatrixA, this -> MatrixA_y, this -> MatrixA_x );
}

zadanie88::zadanie88() {
    this -> GenerateMatrixB();
    this -> CheckIfZero();

}


