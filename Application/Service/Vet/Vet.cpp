#include "./Vet.h"


Vet::Vet(string initials, string fullName, int experience)
{

    this->initials = initials;
    this->fullName = fullName;
    this->experience = experience;

}

string Vet::getInitials(){ return initials; };

string Vet::getFullName(){ return fullName; };


string Vet::getDepartment(){ return department; };



int Vet::getExperience() { return experience; };
