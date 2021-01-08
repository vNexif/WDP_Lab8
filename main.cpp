//
// Created by Nexif on 25/11/2020.
//

#include <iostream>
#include "Menu/menu.h"
#include "Zadania/Zadanie81.h"
#include "Zadania/Zadanie82.h"
#include "Zadania/Zadanie83.h"
#include "Zadania/Zadanie84.h"
#include "Zadania/Zadanie85.h"
#include "Zadania/Zadanie86.h"
#include "Zadania/Zadanie87.h"
#include "Zadania/Zadanie88.h"

void globalCallback(int option) {
    std::cout << "Global Callback | Selection: " << option << std::endl;
}

void zadanie1() {
    std::cout << "You've selected random fill" << std::endl;
    zadanie81();
}

void zadanie2() {
    std::cout << "Item Callback | Selected option 1" << std::endl;
    zadanie82();
}

void zadanie3() {
    std::cout << "Item Callback | Selected option 2" << std::endl;
    zadanie83();
}

void zadanie4() {
    std::cout << "Item Callback | Selected option 2" << std::endl;
    zadanie84();
}

void zadanie5(){
    std::cout << "Item Callback | Selected option %%" << std::endl;

}

void zadanie6(){
    std::cout << "Item Callback | Selected option %%" << std::endl;
}

void zadanie7(){
    std::cout << "Item Callback | Selected option %%" << std::endl;
}

void zadanie8(){
    std::cout << "Item Callback | Selected option %%" << std::endl;

}

int main(int argc, const char * argv[]) {


    // Menu with header and global callbacks
    Menu zadania("Select task:", &globalCallback);

    zadania.addItem("Zadanie 1", &zadanie1);
    zadania.addItem("Zadanie 2", &zadanie2); // You can have global callback and individual callbacks
    zadania.addItem("Zadanie 3", &zadanie3);
    zadania.addItem("Zadanie 4", &zadanie4);
    zadania.addItem("Zadanie 5", &zadanie5);
    zadania.addItem("Zadanie 6", &zadanie6);
    zadania.addItem("Zadanie 7", &zadanie7);
    zadania.addItem("Zadanie 8", &zadanie8);

    zadania.printMenu();

    return 0;
}