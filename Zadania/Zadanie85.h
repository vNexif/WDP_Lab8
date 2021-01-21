//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE85_H
#define LAB_8_ZADANIE85_H

#include "Randomizer.h"

class zadanie85 : protected Randomizer{
private:
    int_fast32_t sum{0},sumFromVec{0}, wholeVecSum{0};
    int_fast16_t sumUpperDiag{0}, sumLowerDiag{0};

    void calcUpperDiagSum();

    void calcLowerDiagSum();

    void showDiagSum() const;

    void calcDiagSum();

    void calcWholeVecSum();

    void calcDiagFromVecSum();
public:
    zadanie85();

};
#endif //LAB_8_ZADANIE85_H
