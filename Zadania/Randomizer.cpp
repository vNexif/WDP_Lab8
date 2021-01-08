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


Randomizer::Randomizer() {
    Randomizer::generateRandom();
}

