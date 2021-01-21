//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie87.h"

void zadanie87::generateMatrixA() {
    this ->  MatrixA = this -> generateRandom(this ->  MatrixA_y,this ->  MatrixA_x);
    Randomizer::showVector(this ->  MatrixA, this ->  MatrixA_y, this ->  MatrixA_x);
}

void zadanie87::generateMatrixB() {
    this ->  MatrixB = this -> generateRandom(this ->  MatrixB_y,this ->  MatrixB_x);
    Randomizer::showVector(this ->  MatrixB, this ->  MatrixB_y, this ->  MatrixB_x);
}


//This works like a charm :)
int_fast32_t zadanie87::CalcRow(int_fast32_t Ay, int_fast32_t Bx) {
    int_fast32_t RowSum{0};
    for (int i = 0, j = 0; i < this -> MatrixA_x && j < this -> MatrixB_y; ++i, ++j) {
        RowSum += MatrixA[Ay][i] * MatrixB[j][Bx];
    }
    return RowSum;
}



void zadanie87::PushToMatrixC(int_fast32_t Cy, int_fast32_t Cx, int_fast32_t x) {
    MatrixC[Cy][Cx] = x;
}

void zadanie87::CalcMatrix() {
    for (int i = 0; i < this -> MatrixA_y; ++i) {
        for (int j = 0; j < this -> MatrixB_x; ++j) {
            this -> PushToMatrixC(i,j, this -> CalcRow(i,j));
        }
    }
}


zadanie87::zadanie87() {

    //Generate random numbers for Matrix A and B.
    this -> generateMatrixA();
    this -> generateMatrixB();

    //Fills Result Matrix with zero values.
    Randomizer::FillMatrixWithZero(this -> MatrixC, this -> MatrixC_y, this ->  MatrixC_x);

    //Calculate Result Matrix.
    this -> CalcMatrix();
    //Show Result Matrix.
    Randomizer::showVector(this -> MatrixC, this -> MatrixC_y, this -> MatrixC_x);

}