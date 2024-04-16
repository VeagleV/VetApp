#include "./MenuItem.h"


MenuItem::MenuItem(string title,itemFunc func) : title(title),  func(func) {};

int MenuItem::executeItem(){

    return func();
}

string MenuItem::getTitle() {
    return title;
}

void MenuItem::setTitle(string title) { this->title = title; }