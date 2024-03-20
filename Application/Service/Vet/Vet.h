#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vet
{

    public:

    Vet(string, string, int, string);

    string getInitials();
    string getFullName();
    string getDescription();
    string getDepartment();

    int getExperience();
    int getDoneServiceQuantity();

    private:

    string initials;
    string fullName;
    string description;
    string department;

    int experience;
    int doneServiceQuantity; 

};