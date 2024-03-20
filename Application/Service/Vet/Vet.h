#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vet
{

    public:

    Vet(string, string, int);

    string getInitials();
    string getFullName();
    string getDepartment();

    int getExperience();
    int getDoneServiceQuantity();

    private:

    string initials;
    string fullName;
    string department;  

    int experience;

};