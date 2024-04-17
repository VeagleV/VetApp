#include "./Vet.h"


Vet::Vet(string initials, string fullName, string department, int experience, int doneServiceQuantity)
{

    this->initials = initials;
    this->fullName = fullName;
    this->department = department;
    this->experience = experience;
    this->doneServiceQuantity = doneServiceQuantity;

}

string Vet::getInitials(){ return initials; };

string Vet::getFullName(){ return fullName; };

string Vet::getDepartment(){ return department; };


int Vet::getExperience() { return experience; };