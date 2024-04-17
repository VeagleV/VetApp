#include <iostream>
#include <string>
#include <vector>
#include "./src/Menu/Menu.h"
#include "./src/MenuItem/MenuItem.h"
#include "./src/Service/Service.h"
#include "./src/Vet/Vet.h"
#include "./src/Functions/FileWork/FileWork.h"
#include "./src/Functions/Search.h"
using namespace std;



int f1() {

    vector<Vet> fill{};
    
    
    
    
    vector<Service> vector1 {
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

int f4() {
    string text = "finaly using strings";
    std::cout << text;
    return 4;
}

int f5() {
    std::cout << "SKIBIDI DOP YES YES YES YES\n\n";
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
        MenuItem{ "Print",f1 },
        MenuItem{ "Save",f2 }, 
        MenuItem{ "Read",f3 },
        MenuItem{ "Punkt 4",f4 },
        MenuItem{ "Punkt 5",f5 }, 
        MenuItem{ "Search",f6 },
    };

    Menu menu(items, ITEM_QUANTITY);

    while(menu.runMenu()){}

    return 0;
}