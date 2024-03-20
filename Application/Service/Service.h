#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "./Vet/Vet.h"
using namespace std;


class Service
{
    public:

    Service(int, string, int, int, vector<Vet>, string, string);

    string getName();
    string getDescription();

    int getPrice();
    int getId();
    int getDoneServices();

    
    private:

    string name;
    string department;
    string description;

    int price;
    int id;
    int doneServices;

    vector<Vet> approvedVets;


};