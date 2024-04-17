#include "Search.h"

Service SearchService(vector<Service> services, string searchParameter, int searchBy)
{

    for (auto service : services)
    {
        string id = to_string(service.getId());
        string name = service.getName();
        string department = service.getDepartment();
        vector<Vet> approvedVets = service.getApprovedVets();

        if (searchBy == 1 && id == searchParameter)
        {
            return service;
        }
        else if (searchBy == 2 && name == searchParameter)
        {
            return service;
        }
        else if (searchBy == 3 && department == searchParameter)
        {
            return service;
        }
        else if (searchBy == 4)
        {
            for (Vet vet : approvedVets)
            {
                if(vet.getInitials() == searchParameter)
                {
                    return service;
                }
            }
        }
    }
    throw runtime_error("Элемент не найден");
}