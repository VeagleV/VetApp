#include "./Service.h"
#include "./Vet/Vet.h"


Service::Service(int id, string name, int doneServices, int price, vector<Vet> approvedVets,string department, string description)
{
    this->id = id;
    this->name = name;
    this->doneServices = doneServices;
    this->price = price;
    this->approvedVets = approvedVets;
    this->department = department;
    this->description = description;
}



string Service::getName(){ return name; }

string Service::getDescription() { return description; }

int Service::getPrice(){ return price; }

int Service::getId(){ return id; }

int Service::getDoneServices(){ return doneServices; }
