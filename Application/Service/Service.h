#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "./Vet/Vet.h"
using namespace std;


class Service
{
    public:

    Service(string, int,vector<Vet>, string);

    string getName();
    string getDescription();

    int getPrice();
    
    private:

    string name;
    string description;

    int price;

    vector<Vet> approvedVets;


};