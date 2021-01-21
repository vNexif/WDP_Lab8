//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE88_H
#define LAB_8_ZADANIE88_H

#include "Randomizer.h"

class zadanie88 : protected Randomizer{
public:
    zadanie88();

private:
    int_fast32_t MatrixA_y{100}, MatrixA_x{2}, MatrixB_y{10}, MatrixB_x{10}, MatrixB_a{-3}, MatrixB_b{3};

    std::vector<std::vector<int_fast32_t>> MatrixA = std::vector<std::vector<int_fast32_t>>( this -> MatrixA_y, std::vector<int_fast32_t>( this -> MatrixA_x ));
    std::vector<std::vector<int_fast32_t>> MatrixB = std::vector<std::vector<int_fast32_t>>( this -> MatrixB_y, std::vector<int_fast32_t>( this -> MatrixB_x ));

    void GenerateMatrixB();

    void CheckIfZero();


    void PushCordsToMatrixA(int_fast32_t y, int_fast32_t x);

    void PushCordsToMatrixA(int_fast32_t n, int_fast32_t y, int_fast32_t x);
};


#endif //LAB_8_ZADANIE88_H
