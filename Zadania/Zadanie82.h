//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE82_H
#define LAB_8_ZADANIE82_H
#include "Randomizer.h"

class zadanie82 : protected Randomizer{
private:
    int_fast32_t sum{0};

    void calcSum();

    void showSum();

public:
    zadanie82();

};

#endif //LAB_8_ZADANIE82_H
