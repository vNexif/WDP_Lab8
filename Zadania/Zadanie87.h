//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE87_H
#define LAB_8_ZADANIE87_H

#include "Randomizer.h"

class zadanie87 : protected Randomizer{

public:
    zadanie87();

private:
    int_fast32_t MatrixA_y{5}, MatrixA_x{6}, MatrixB_y{6}, MatrixB_x{2}, MatrixC_y{5}, MatrixC_x{2};
    std::vector<std::vector<int_fast32_t>>  MatrixA{0};
    std::vector<std::vector<int_fast32_t>> MatrixB{0};
    std::vector<std::vector<int_fast32_t>> MatrixC = std::vector<std::vector<int_fast32_t>>( this -> MatrixC_y, std::vector<int_fast32_t> ( this -> MatrixC_x ));


    void generateMatrixA();

    void generateMatrixB();


    int_fast32_t CalcRow(int_fast32_t Ay, int_fast32_t Bx);

    void PushToMatrixC(int_fast32_t Cy, int_fast32_t Cx, int_fast32_t x);


    void CalcMatrix();
};

#endif //LAB_8_ZADANIE87_H
