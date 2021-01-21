//
// Created by Nexif on 07/01/2021.
//

#ifndef LAB_8_ZADANIE86_H
#define LAB_8_ZADANIE86_H

#include "Randomizer.h"
#include "fstream"

class zadanie86 : protected Randomizer{
private:
    int sel_m{0}, sel_r{0}, sel_c{0}, sel_row_1{0}, sel_row_2{0}, sel_col_1{0}, sel_col_2{0};
    std::vector<int_fast32_t> helper{};

    void fetch_col_row();

    void copy_To_Helper();

    void showHelper();


public:
    zadanie86();


};
#endif //LAB_8_ZADANIE86_H
