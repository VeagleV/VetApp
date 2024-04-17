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

Service::Service(){};

string Service::getName(){ return name; }

string Service::getDepartment(){ return department; }

string Service::getDescription() { return description; }

string Service::getDepartment() { return department; }

int Service::getPrice(){ return price; }

int Service::getId(){ return id; }

int Service::getDoneServices(){ return doneServices; }

vector<Vet> Service::getApprovedVets() { return approvedVets; }
void Service::printService()
{
    cout <<id          << "   ";
    cout <<department  << "   "; 
    cout <<name        << "   "; 
    cout <<description << "   ";
    cout <<doneServices<< "   ";
    cout <<price       << "   ";
    cout <<approvedVets[0].getInitials()<< ", " << approvedVets[1].getInitials() << endl;
}

