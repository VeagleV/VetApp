#include "./Service.h"
#include "./Vet/Vet.h"


Service::Service(string name, int price, vector<Vet> approvedVets, string description)
{
    this->name = name;
    this->price = price;
    this->approvedVets = approvedVets;
    this->description = description;
}


string Service::getName(){ return name; }

string Service::getDescription() { return description; }

int Service::getPrice(){ return price; }