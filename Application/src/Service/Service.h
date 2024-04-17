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
    Service();

    string getName();
    string getDepartment();
    string getDescription();

    int getPrice();
    int getId();
    int getDoneServices();

    void printService();

    vector<Vet> getApprovedVets();
    
    private:

    string name;
    string department;
    string description;

    int price;
    int id;
    int doneServices;

    vector<Vet> approvedVets;

};