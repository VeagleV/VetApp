#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "../Vet/Vet.h"
using namespace std;


class Service
{
    public:

    Service(int, string,string,string, int, int, vector<Vet> );

    string getName();
    string getDescription();

    int getPrice();
    int getId();
    int getDoneServices();

    void printService();
    
    private:

    string name;
    string department;
    string description;

    int price;
    int id;
    int doneServices;

    vector<Vet> approvedVets;

    vector<Service> vulvas;
};