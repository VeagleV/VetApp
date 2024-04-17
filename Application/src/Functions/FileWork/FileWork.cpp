#include "./FileWork.h"
#include <algorithm>
vector<Service>  ReadFile1(string filename)
{
    ifstream file(filename, ios::binary);

    if(!file.is_open())
    {
        throw runtime_error("Ошибка открытия файла: " + filename);
    }

    vector<Service> services;
    Service service;
    while(file.read(reinterpret_cast<char*>(&service), sizeof(service)))
    {
        services.push_back(service);
        cout << "Reading...";
    }
    file.close();
    return services;
}



void SaveFile( string filename, vector<Service>& services)
{
    ofstream file(filename, ios::binary);
    cout << "1Saving...";
    if (!file.is_open())
    {
        throw runtime_error("Ошибка открытия файла: " + filename);
    }
    cout << "2Saving...";
    for(Service& service : services)
    {
        file.write(reinterpret_cast<char*>(&service),sizeof(service));
        cout << "Saving...";
    }

    file.close();
}





