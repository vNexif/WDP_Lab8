//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie81.h"



zadanie81::zadanie81(){
    zadanie81::getUserInput();
    zadanie81::fillVec();
    zadanie81::showResult();
}

int_fast32_t zadanie81::getUserInput() {
    int_fast32_t x;
    std::clog << "Podaj wartosc " << " :" << std::endl;
    std::cin >> x;
    return x;
}

void zadanie81::fillVec() {
    for (int i = 0; i < this -> n; ++i) {
        for (int j = 0; j < this -> m; ++j) {
            vec[i][j] = zadanie81::getUserInput();
        }
    }
}


void zadanie81::showResult() {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
}