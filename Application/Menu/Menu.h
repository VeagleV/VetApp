#pragma once
#include <iostream>
#include <string>
#include "./MenuItem/MenuItem.h"
using namespace std;

class Menu
{
    public:
    
    Menu( MenuItem *, int);


    int runMenu();
    void print();

    int getItemQuantity();
    
    int getSelect();
    
    private:
    
    bool isRunning = false;
    int select;
    int itemQuantity{5};
    MenuItem *items{};
};