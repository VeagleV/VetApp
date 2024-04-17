#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "./src/Menu/Menu.h"
#include "./src/MenuItem/MenuItem.h"
#include "./src/Service/Service.h"
#include "./src/Vet/Vet.h"
#include "./src/Functions/FileWork/FileWork.h"
#include "./src/Functions/Search.h"
using namespace std;

bool isIntInputValid(const string& input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool isStringInputValid(string input) {
    for (char c : input) {
        if (!isalpha(c)) {
            return false;
        } 
    }
    return true;
}

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

int f1() {

    vector<Vet> Surgeons{
        Vet("Хабибулина Э.Н.", "Хабибулина Эльвира Никитична", "Хирург", 25, 2000),
        Vet("Киселёв А.Ф.", "Киселёв Александр Фёдорович", "Хирург", 19, 1300),
    };

    vector<Vet> Policninicals{
        Vet("Романенко П.Е.", "Романенко Павел Егорович", "Терапевт", 36, 3100),
        Vet("Самойлов С.А.", "Самойлов Сергей Арсеньевич", "Терапевт", 6, 500),
    };

    vector<Vet> Cosmetics{
        Vet("Харитонов И.Е.", "Харитонов Иван Егорович", "Косметолог", 12, 1100),
        Vet("Абрамян А.С.", "Абрамян Аршавир Саркисович", "Косметолог", 1, 150),
    };

    vector<Service> vector {
        Service(11,"Хирургия","Кастрация","искусственное прекращение функции половых желез",322,3500,Surgeons),
        Service(12,"Хирургия","Стерилизация","удаление половых органов",169,3900,Surgeons),
        Service(13,"Хирургия","Обработка ран","Обработка ран от инфекций",121,1000,Surgeons),
        Service(14,"Хирургия","Эндоскопия","осмотр полостей тела животного длинной тонкой трубкой",267,500,Policninicals),
        Service(21,"Поликлиника","Вакцинация","профилактика инфекционных заболеваний",512,2000,Policninicals),
        Service(22,"Поликлиника","Чипирование","внедрение под кожу животного специального электронного чипа",67,1200,Policninicals),
        Service(23,"Поликлиника","Рентген","исследование организма животного рентгеновскими лучами",243,2700,Policninicals),
        Service(24,"Поликлиника","УЗИ","исследование организма животного ультразвуковыми волнами",475,750,Policninicals),
        Service(31,"Косметика","Груминг","комплекс процедур для ухода за шерстью",597,4400,Cosmetics),
        Service(32,"Косметика","Стрижка","тримминг волосяных покровов",678,1800,Cosmetics),
        Service(33,"Косметика","Чистка ушей","прочистка ушных каналов",516,300,Cosmetics),
        Service(34,"Косметика","Стрижка когтей","процедура усечения когтей",756,600,Cosmetics),
    };

    //SaveFile("./bin/DataBase.bin", vector1);
    vector<Service> temp = ReadFile1("./bin/DataBase.bin");
    vector1.erase(vector1.begin(), vector1.begin()+6);
    for(int i = 0; i < temp.size(); i++)
    {
        temp[i].printService();
    }
    return 1;
}

int f2() {
    
    return 2;
}

int f3() {
    std::cout << "function f3 is running...\n\n";
    return 3;
}

int f4(){
    vector<Vet> Surgeons{
        Vet("Хабибулина Э.Н.", "Хабибулина Эльвира Никитична", "Хирург", 25, 2000),
        Vet("Киселёв А.Ф.", "Киселёв Александр Фёдорович", "Хирург", 19, 1300),
    };

    vector<Vet> Policninicals{
        Vet("Романенко П.Е.", "Романенко Павел Егорович", "Терапевт", 36, 3100),
        Vet("Самойлов С.А.", "Самойлов Сергей Арсеньевич", "Терапевт", 6, 500),
    };

    vector<Vet> Cosmetics{
        Vet("Харитонов И.Е.", "Харитонов Иван Егорович", "Косметолог", 12, 1100),
        Vet("Абрамян А.С.", "Абрамян Аршавир Саркисович", "Косметолог", 1, 150),
    };

    vector<Service> vector {
        Service(11,"Хирургия","Кастрация","искусственное прекращение функции половых желез",322,3500,Surgeons),
        Service(12,"Хирургия","Стерилизация","удаление половых органов",169,3900,Surgeons),
        Service(13,"Хирургия","Обработка ран","Обработка ран от инфекций",121,1000,Surgeons),
        Service(14,"Хирургия","Эндоскопия","осмотр полостей тела животного длинной тонкой трубкой",267,500,Policninicals),
        Service(21,"Поликлиника","Вакцинация","профилактика инфекционных заболеваний",512,2000,Policninicals),
        Service(22,"Поликлиника","Чипирование","внедрение под кожу животного специального электронного чипа",67,1200,Policninicals),
        Service(23,"Поликлиника","Рентген","исследование организма животного рентгеновскими лучами",243,2700,Policninicals),
        Service(24,"Поликлиника","УЗИ","исследование организма животного ультразвуковыми волнами",475,750,Policninicals),
        Service(31,"Косметика","Груминг","комплекс процедур для ухода за шерстью",597,4400,Cosmetics),
        Service(32,"Косметика","Стрижка","тримминг волосяных покровов",678,1800,Cosmetics),
        Service(33,"Косметика","Чистка ушей","прочистка ушных каналов",516,300,Cosmetics),
        Service(34,"Косметика","Стрижка когтей","процедура усечения когтей",756,600,Cosmetics),
    };
    cout << "\n Меню сортировки:" << endl;
    cout << "1. По идентификатору(А-Я)" << endl;
    cout << "2. По идентификатору(Я-А)" << endl;
    cout << "3. По разделу(А-Я)" << endl;
    cout << "4. По разделу(Я-А)" << endl;
    cout << "5. По названию(А-Я)" << endl;
    cout << "6. По названию(Я-А)" << endl;
    cout << "0. Выход" << endl;

    string choice;
    cout << "Введите нужный пункт сортировки:\n";
    cin >> choice;
    while (isIntInputValid(choice) == false || isIntInCase(stoi(choice), 0, 6) == false){
        cout << "Неверный ввод! Введите нужный пункт сортировки снова:\n";
        cin >> choice;
    }
    switch(stoi(choice)){
        case 0:
            return 4;
            break;
        case 1:
            sort(vector.begin(),vector.end(), sortById);
            break;
        case 2:
            sort(vector.begin(),vector.end(), sortById);
            break;
        case 3:
            sort(vector.begin(),vector.end(), sortByDepartment);
            break;
        case 4:
            sort(vector.begin(),vector.end(), sortByDepartmentReverse);
            break;
        case 5:
            sort(vector.begin(),vector.end(), sortByName);
            break;
        case 6:
            sort(vector.begin(),vector.end(), sortByNameReverse);
            break;
    }
    for(int i = 0; i < vector.size(); i++)
    {
        vector[i].printService();
    }
    return 4;
}

int f5() {
    string name;
    string service;
    string telephone;
    string animal;
    cout << "Введите свое имя:";
    cin >> name;
    while (isStringInputValid(name) == false){
        cout << "Неверный ввод! Введите имя снова:\n";
        cin >> name;
    }
    cout << "Введите свой телефон(формата 8ХХХХХХХХХХ):";
    cin >> telephone;
    int len = 0;
    for (char c : telephone) {
        if (isdigit(c)) {
            len++;
        } 
    }
    while (isIntInputValid(telephone) == false || isIntInCase(len, 11, 11) == false){
        cout << "Неверный ввод! Введите телефон снова:\n";
        cin >> telephone;
        len = 0;
        for (char c : telephone) {
            if (isdigit(c)) {
                len++;
            } 
        }
    }
    cout << "Введите название выбранной услуги:";
    cin >> service;
    while (isStringInputValid(service) == false){
        cout << "Неверный ввод! Введите услугу снова:\n";
        cin >> service;
    }
    cout << "Введите вид животного:";
    cin >> animal;
    while (isStringInputValid(animal) == false){
        cout << "Неверный ввод! Введите вид животного снова:\n";
        cin >> animal;
    }
    ofstream fout;
    fout.open("Reception.txt");
    if (fout.is_open()){
        fout << name << ", "<< telephone <<", " << service << ", " << animal << endl;
        cout << endl;
        cout << "Вы были успешно записы на сеанс!" << endl;
        fout.close();
        }
    else {
        cout << "Ошибка открытия файла!" << endl;
    }
    return 5;
}

int f6() {

    vector<Vet> fill{};
    vector<Service> vector {
        Service(11,"Хирургия","Кастрация","искусственное прекращение функции половых желез",322,3500,fill),
        Service(12,"Хирургия","Стерилизация","удаление половых органов",169,3900,fill),
        Service(13,"Хирургия","Обработка ран","Обработка ран от инфекций",121,1000,fill),
        Service(14,"Хирургия","Эндоскопия","осмотр полостей тела животного длинной тонкой трубкой",267,500,fill),
        Service(21,"Поликлиника","Вакцинация","профилактика инфекционных заболеваний",512,2000,fill),
        Service(22,"Поликлиника","Чипирование","внедрение под кожу животного специального электронного чипа",67,1200,fill),
        Service(23,"Поликлиника","Рентген","исследование организма животного рентгеновскими лучами",243,2700,fill),
        Service(24,"Поликлиника","УЗИ","исследование организма животного ультразвуковыми волнами",475,750,fill),
        Service(31,"Косметика","Груминг","комплекс процедур для ухода за шерстью",597,4400,fill),
        Service(32,"Косметика","Стрижка","тримминг волосяных покровов",678,1800,fill),
        Service(33,"Косметика","Чистка ушей","прочистка ушных каналов",516,300,fill),
        Service(34,"Косметика","Стрижка когтей","процедура усечения когтей",756,600,fill),
    };

    int choice;
    string searchParameter;
    Service serviceFound;
    cout << "Выберите по какому свойству сортировать: ";
    cout << "\n 1. Идентификационный номер";
    cout << "\n 2. Название услуги";
    cout << "\n 3. Раздел";
    cout << "\n 4. Специалист(инициалы)";
    cout << "\n Ваш выбор: ";
    cin >> choice;
    cout << "\n Введите ключевой параметр: ";
    cin >> searchParameter;

    switch (choice)
    {
    case 1:
        serviceFound = SearchService(vector,searchParameter,choice);
        serviceFound.printService();
        break;
    case 2:
        serviceFound = SearchService(vector,searchParameter,choice);
        serviceFound.printService();
        break;
    case 3:
        serviceFound = SearchService(vector,searchParameter,choice);
        serviceFound.printService();
        break;
    case 4:
    default:
        throw runtime_error("Такого пункта не существует");
        break;
    }
    return 6;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int const ITEM_QUANTITY = 6;

    MenuItem items[ITEM_QUANTITY]
    {
        MenuItem{ "Print service data",f1 },
        MenuItem{ "Save",f2 }, 
        MenuItem{ "Read",f3 },
        MenuItem{ "Sorting",f4 },
        MenuItem{ "Signing on reception",f5 }, 
        MenuItem{ "Search",f6 },
    };

    Menu menu(items, ITEM_QUANTITY);

    while(menu.runMenu()){}

    return 0;
}