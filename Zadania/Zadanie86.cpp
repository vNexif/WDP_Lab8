//
// Created by Nexif on 07/01/2021.
//

#include "Zadanie86.h"

void zadanie86::fetch_col_row() {
    try {
        std::cout << "Change:" << std::endl;
        std::cout << "  1.Row" << std::endl;
        std::cout << "  2.Column" << std::endl << std::endl;
        std::cout << "Selection :", std::cin >> this->sel_m;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.exceptions(std::istream::failbit | std::istream::badbit);
        }
        if ( this -> sel_m < 1 || this -> sel_m > 2 ) {
            throw std::runtime_error("Bad user input");
        }
    }
    catch ( std::ifstream::failure &e ) {
        std::cerr << "Bad input value." << std::endl;
    }

    catch ( std::runtime_error &e ) {
        std::cerr << e.what() << std::endl;
    }

}

void zadanie86::copy_To_Helper() {
    try {
        if ( this -> sel_m == 1 ) {
            std::cout << "Enter the row numbers to exchange:" << std::endl;
            std::cout << "Row 1:", std::cin >> this -> sel_row_1;
            std::cout << "Row 2:", std::cin >> this -> sel_row_2;
            if ( std::cin.fail() ) {
                std::cin.clear();
                std::cin.exceptions(std::istream::failbit | std::istream::badbit);
            }
            if ( this -> sel_row_1 == this -> sel_row_2 ) {
                throw std::logic_error( "Cmon. ;v\nNothing to do here.");
            }
            if ( this -> sel_row_1 >= 0 && this -> sel_row_1 < this -> n && this -> sel_row_2 >= 0 && this -> sel_row_2 < this -> n ) {
                for (int i = 0; i < this -> m; ++i) {
                    this -> helper.push_back(this -> vec[this -> sel_row_1][i]);
                    this -> vec[this -> sel_row_1][i] = this -> vec[this -> sel_row_2][i];
                    this -> vec[this -> sel_row_2][i] = this -> helper[i];

                    //Is this -> helper = vec[this -> sel_row_1], this -> vec[this -> sel_row_1] = this -> vec[this -> sel_row_2], this -> vec[this -> sel_row_2] = helper; An option ? :x
                }
            }
            else{
                throw std::logic_error( "Sth. wrong here :( " );
            }
        }

        else if ( this -> sel_m == 2 ) {
            std::cout << "Enter the column numbers to exchange:" << std::endl;
            std::cout << "Column 1:", std::cin >> this -> sel_col_1;
            std::cout << "Column 2:", std::cin >> this -> sel_col_2;

            if ( std::cin.fail() ) {
                std::cin.clear();
                std::cin.exceptions(std::istream::failbit | std::istream::badbit);
            }
            if ( this -> sel_col_1 == this -> sel_col_2 ) {
                throw std::logic_error( "Cmon. ;v\nNothing to do here.");
            }
            if ( this -> sel_col_1 >= 0 && this -> sel_col_1 < this -> m && this -> sel_col_2 >= 0 && this -> sel_col_2 < this -> m ) {
                for (int i = 0; i < this -> n; ++i) {
                    this -> helper.push_back(this -> vec[i][ this -> sel_col_1 ]);
                    this -> vec[i][this -> sel_col_1] = this -> vec[i][this -> sel_col_2];
                    this -> vec[i][this -> sel_col_2] = this -> helper[i];
                }
            }
            else {
                throw std::logic_error( "Sth. wrong here :( " );
            }
        }
    }

    catch ( std::ifstream::failure &e ) {
        std::cerr << "Bad input value." << std::endl;
        std::exit(3);
    }
    catch ( std::logic_error &logicError ) {
        std::cerr << logicError.what() << std::endl;
        std::exit(3);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        std::exit(3);
    }
}

void zadanie86::showHelper() {
    for (int i : this -> helper) {
        std::cout << i << " ";
    }
}

zadanie86::zadanie86() {
    //Generate and fill vector.
    this -> generateRandom();
    this -> showVector();


    //Fetch user input data.
    this -> fetch_col_row();
    //Copy from Row to
    this -> copy_To_Helper();
    this -> showHelper();
    std::cout << std::endl << std::endl;
    std::cout << "The vector after place exchange: " << std::endl;
    this -> showVector();
}

