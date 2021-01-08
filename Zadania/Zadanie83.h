//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE83_H
#define LAB_8_ZADANIE83_H
#include "Randomizer.h"

class zadanie83 : protected Randomizer{
private:
    int_fast32_t evenNumbSum{};

    void findEven();
    void sumEven(int_fast32_t x);

public:
    zadanie83();


    void showEvenSum() const;
};
#endif //LAB_8_ZADANIE83_H
