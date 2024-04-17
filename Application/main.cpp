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
#include "./src/Functions/Search/Search.h"
#include "./src/Functions/Sort/Sort.h"
#include "./src/Functions/InputCheck/InputCheck.h"
using namespace std;



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

    vector<Service> serviceVector {
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

int PrintData() {

    

    //SaveFile("./bin/DataBase.bin", serviceVector1);
    //vector<Service> temp = ReadFile("./bin/DataBase.bin");
    for(int i = 0; i < serviceVector.size(); i++)
    {
        serviceVector[i].printService();
    }
    return 1;
}

int SaveToFile() {

    SaveFile("./bin/DataBase.bin", serviceVector);
    cout << "Таблица была успешно сохранена в файл!";
    return 2;
}

int ReadFromFile() {
    serviceVector = ReadFile("./bin/DataBase.bin");
    cout << "Таблица была успешно загружена из файла!";

    int choice;
    cout << "Желаете посмотреть таблицу? 1:Да 2: Нет";
    cin >> choice;

    if(choice == 1) { return PrintData(); }

    return 3;
}

int Sorting(){
    
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
            sort(serviceVector.begin(),serviceVector.end(), sortById);
            break;
        case 2:
            sort(serviceVector.begin(),serviceVector.end(), sortById);
            break;
        case 3:
            sort(serviceVector.begin(),serviceVector.end(), sortByDepartment);
            break;
        case 4:
            sort(serviceVector.begin(),serviceVector.end(), sortByDepartmentReverse);
            break;
        case 5:
            sort(serviceVector.begin(),serviceVector.end(), sortByName);
            break;
        case 6:
            sort(serviceVector.begin(),serviceVector.end(), sortByNameReverse);
            break;
    }
    for(int i = 0; i < serviceVector.size(); i++)
    {
        serviceVector[i].printService();
    }
    return 4;
}

int Signing() {
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
    fout.open("./bin/Reception.txt");
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

int Search() {

    

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
        serviceFound = SearchService(serviceVector,searchParameter,choice);
        serviceFound.printService();
        break;
    case 2:
        serviceFound = SearchService(serviceVector,searchParameter,choice);
        serviceFound.printService();
        break;
    case 3:
        serviceFound = SearchService(serviceVector,searchParameter,choice);
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
        MenuItem{ "Print service data",PrintData },
        MenuItem{ "Save",SaveToFile }, 
        MenuItem{ "Read",ReadFromFile },
        MenuItem{ "Sorting",Sorting },
        MenuItem{ "Signing on reception",Signing }, 
        MenuItem{ "Search",Search },
    };

    Menu menu(items, ITEM_QUANTITY);

    while(menu.runMenu()){}

    return 0;
}