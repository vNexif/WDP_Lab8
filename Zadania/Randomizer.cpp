//
// Created by Nexif on 07/01/2021.
//

#include "Randomizer.h"

void Randomizer::generateRandom() {
    std::random_device rd;
    std::mt19937_64 gen(rd());

    std::uniform_int_distribution<int_fast32_t> dist(0,64);

    for (int i = 0; i < this -> n; ++i) {
        for (int j = 0; j < this -> m; ++j) {
            this -> vec[i][j] = dist(gen);
        }
    }
}

std::vector<std::vector<int_fast32_t>> Randomizer::generateRandom(int_fast32_t y, int_fast32_t x) {
    std::random_device rd;
    std::mt19937_64 gen(rd());

    std::uniform_int_distribution<int_fast32_t> dist(0,64);
    std::vector<std::vector<int_fast32_t>> re_vec ( y, std::vector<int_fast32_t> (x,0));

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            re_vec[i][j] = dist(gen);
        }
    }
    return re_vec;
}

std::vector<std::vector<int_fast32_t>> Randomizer::generateRandom(int_fast32_t y, int_fast32_t x, int_fast32_t a, int_fast32_t b) {
    std::random_device rd;
    std::mt19937_64 gen(rd());

    std::uniform_int_distribution<int_fast32_t> dist(a,b);
    std::vector<std::vector<int_fast32_t>> re_vec ( y, std::vector<int_fast32_t> (x,0));

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            re_vec[i][j] = dist(gen);
        }
    }
    return re_vec;
}

void Randomizer::showVector() {
    for(int i = 0; i < this -> n; ++i)
    {
        for(int j = 0; j < this -> m; ++j)
        {
            std::cout << this -> vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Randomizer::showVector( std::vector<std::vector<int_fast32_t>> Matrix, int_fast32_t y, int_fast32_t x ) {
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            std::cout << Matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Randomizer::FillMatrixWithZero( std::vector<std::vector<int_fast32_t>> Matrix, int_fast32_t y, int_fast32_t x ) {
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            Matrix[i][j] = 0;
        }
    }
}


Randomizer::Randomizer() {
    Randomizer::generateRandom();
}

