//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE83_H
#define LAB_8_ZADANIE83_H
#include "Randomizer.h"

class zadanie83 : protected Randomizer{
private:
    int_fast32_t evenNumbCount{0};

    void findEven();

public:
    zadanie83();


    void showEvenSum() const;
};
#endif //LAB_8_ZADANIE83_H
