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

    void showVector();
public:
    Randomizer();
    void generateRandom();
};


#endif //LAB_8_RANDOMIZER_H
