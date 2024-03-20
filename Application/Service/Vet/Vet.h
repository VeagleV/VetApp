#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vet
{

    public:

    Vet(string, string, int, int, string);

    string getInitials();
    string getFullName();
    string getDescription();
    string getDepartment();

    int getAge();
    int getExperience();
    int getDoneServiceQuantity();

    private:

    string initials;
    string fullName;
    string description;
    string department;

    int age;
    int experience;
    int doneServiceQuantity; 

};