#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vet
{

    public:

    Vet(string, string, string, int, int);

    string getInitials();
    string getFullName();
    string getDepartment();

    int getExperience();
    int getDoneServiceQuantity();

    private:

    string initials;
    string fullName;
    string department;

    int doneServiceQuantity;  
    int experience;

};