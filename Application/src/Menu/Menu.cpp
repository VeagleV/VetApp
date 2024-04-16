#include "./Menu.h"

Menu::Menu( MenuItem *items, int itemQuantity) : items(items), itemQuantity(itemQuantity) {};

int Menu::getSelect(){ return select; }

int Menu::getItemQuantity() { return itemQuantity; };



void Menu::print(){
    //TODO: сделать вывод  менюшки красивой
    
    cout << "\nMENU\n";
    for(int i = 0; i < itemQuantity; i++) 
    {
        cout << " " << i+1 << ". "<< items[i].getTitle() << "\n";
    }
    cout << " 0. Exit";

}

int Menu::runMenu()
{
    isRunning = true;
    print();
    cout << "\n Select: ";
    cin >> select;
    
    isRunning = false;
    return items[select-1].executeItem();
}
