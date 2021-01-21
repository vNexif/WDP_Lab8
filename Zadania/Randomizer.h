//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_RANDOMIZER_H
#define LAB_8_RANDOMIZER_H

#include "iostream"
#include "vector"
#include "random"

class Randomizer {
protected:
    int n{5}, m{6};
    std::vector<std::vector<int_fast32_t>> vec = std::vector<std::vector<int_fast32_t>>( this -> n, std::vector<int_fast32_t> (this -> m,0));

    void generateRandom();
    std::vector<std::vector<int_fast32_t>> generateRandom(int_fast32_t a, int_fast32_t b);
    std::vector<std::vector<int_fast32_t>> generateRandom(int_fast32_t y, int_fast32_t x, int_fast32_t a, int_fast32_t b);

    void FillMatrixWithZero(std::vector<std::vector<int_fast32_t>> Matrix, int_fast32_t y, int_fast32_t x);

    void showVector();
    void showVector(std::vector<std::vector<int_fast32_t>> vector, int_fast32_t y, int_fast32_t x);

public:
    Randomizer();

};


#endif //LAB_8_RANDOMIZER_H
