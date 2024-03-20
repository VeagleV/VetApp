#include "./Vet.h"


Vet::Vet(string initials, string fullName, int experience, string description)
{

    this->initials = initials;
    this->fullName = fullName;
    this->experience = experience;
    this->description = description; 

}

string Vet::getInitials(){ return initials; };

string Vet::getFullName(){ return fullName; };

string Vet::getDescription(){ return description; };

string Vet::getDepartment(){ return department; };



int Vet::getExperience() { return experience; };
