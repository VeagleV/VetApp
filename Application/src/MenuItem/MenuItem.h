#pragma once
#include <iostream>
#include <string>
using namespace std;


class MenuItem
{
    public: 
    typedef int(*itemFunc)();
    itemFunc func{};
    int executeItem();

    MenuItem(string, itemFunc);

    string getTitle();
    void setTitle(const string);

    private:
    string title  = "default";
};
