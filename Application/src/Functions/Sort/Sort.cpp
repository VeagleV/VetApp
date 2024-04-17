#include "./Sort.h"




bool isIntInCase(int input, long long int min, long long int max) {
    if (input < min || input > max) {
        return false;
    }
    return true;
}

bool sortByName(Service service1, Service service2)
{
    string name1 = service1.getName();
    string name2 = service2.getName();
    if(name1.compare(name2)>0){
        return true;
    };
    return false;
}
bool sortByNameReverse(Service service1, Service service2)
{
    string name1 = service1.getName();
    string name2 = service2.getName();
    if(name1.compare(name2)<0){
        return true;
    };
    return false;
}

bool sortByDepartment(Service service1, Service service2)
{
    string name1 = service1.getDepartment();
    string name2 = service2.getDepartment();
    if(name1.compare(name2)>0){
        return true;
    };
    return false;
}
bool sortByDepartmentReverse(Service service1, Service service2)
{
    string name1 = service1.getDepartment();
    string name2 = service2.getDepartment();
    if(name1.compare(name2)<0){
        return true;
    };
    return false;
}

bool sortById(Service service1, Service service2)
{
    int name1 = service1.getId();
    int name2 = service2.getId();
    if(name1 > name2){
        return true;
    };
    return false;
}
bool sortByIdReverse(Service service1, Service service2)
{
    int name1 = service1.getId();
    int name2 = service2.getId();
    if(name1 < name2){
        return true;
    };
    return false;
}