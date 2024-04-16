#include "./Service.h"
#include "../Vet/Vet.h"

//департ.номер. 
Service::Service(int id, string department,string name,string description, int doneServices, int price, vector<Vet> approvedVets)
{
    this->id = id;
    this->department = department;
    this->name = name;
    this->description = description;
    this->doneServices = doneServices;
    this->price = price;
    this->approvedVets = approvedVets;
}


string Service::getName(){ return name; }

string Service::getDescription() { return description; }

int Service::getPrice(){ return price; }

int Service::getId(){ return id; }

int Service::getDoneServices(){ return doneServices; }

void Service::printService()
{

    cout <<id          << "   ";
    cout <<department  << "   "; 
    cout <<name        << "   "; 
    cout <<description << "   ";
    cout <<doneServices<< "   ";
    cout <<price       << "   " << endl;
}