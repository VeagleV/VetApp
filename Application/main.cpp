#include <iostream>
#include <string>
#include <vector>
#include "./Menu/Menu.h"
#include "./Menu/MenuItem/MenuItem.h"
#include "./Service/Service.h"
#include "./Service/Vet/Vet.h"

using namespace std;



int f1() {
    string text = "finaly using strings";
    std::cout << text;
    return 1;
}

int f2() {
    std::cout << "SKIBIDI DOP YES YES YES YES\n\n";
    return 2;
}

int f3() {
    std::cout << "function f3 is running...\n\n";
    return 3;
}

int f4() {
    string text = "finaly using strings";
    std::cout << text;
    return 4;
}

int f5() {
    std::cout << "SKIBIDI DOP YES YES YES YES\n\n";
    return 5;
}

int f6() {
    std::cout << "function f3 is running...\n\n";
    return 6;
}


int main()
{
    int const ITEM_QUANTITY = 6;

    MenuItem items[ITEM_QUANTITY]
    {
        MenuItem{ "Punkt 1",f1 },
        MenuItem{ "Punkt 2",f2 }, 
        MenuItem{ "Punkt 3",f3 },
        MenuItem{ "Punkt 4",f4 },
        MenuItem{ "Punkt 5",f5 }, 
        MenuItem{ "Punkt 6",f6 },
    };

    Menu menu(items, ITEM_QUANTITY);

    while(menu.runMenu()){}

    return 0;
}