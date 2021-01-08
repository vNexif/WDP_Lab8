//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE84_H
#define LAB_8_ZADANIE84_H
#include "Randomizer.h"

class zadanie84 : protected Randomizer{
private:
    int_fast32_t rowSum{};
    int usrIn{0};

    void fetchUserInput();

    void calcRowSum();

    void showRowSum() const;

public:
    zadanie84();
};

#endif //LAB_8_ZADANIE84_H
