#include "./FileWork.h"
#include <algorithm>
vector<Service>  ReadFile(string filename)
{
    ifstream file(filename, ios::binary);
    if(!file.is_open())
    {
        throw runtime_error("Ошибка открытия файла: " + filename);
    }
    vector<Service> services;
    Service service;

    while (file.read(reinterpret_cast<char*>(&service), sizeof(Service))) 
    {
        services.push_back(service);
    }

    file.close();
    return services;
}



void SaveFile( string filename, vector<Service>& services)
{
    ofstream file(filename, ios::binary);
    if (!file.is_open())
    {
        throw runtime_error("Ошибка открытия файла: " + filename);
    }
     for(Service& service : services)
    {
        file.write(reinterpret_cast<char*>(&service),sizeof(Service));
    }


    file.close();
}





