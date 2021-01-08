//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE81_H
#define LAB_8_ZADANIE81_H

#include <iostream>
#include <vector>

class zadanie81{

private:
    int n{3}, m{4};
    std::vector<std::vector<int_fast32_t>> vec = std::vector<std::vector<int_fast32_t>>( this -> n, std::vector<int_fast32_t> (this -> m,0));
public:
    zadanie81();
    int_fast32_t getUserInput();
    void fillVec();
    void showResult();
};

#endif //LAB_8_ZADANIE81_H
