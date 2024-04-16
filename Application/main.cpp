#include <iostream>
#include <string>
#include <vector>
#include "./src/Menu/Menu.h"
#include "./src/MenuItem/MenuItem.h"
#include "./src/Service/Service.h"
#include "./src/Vet/Vet.h"

using namespace std;



int f1() {

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

    for(int i = 0; i < vector.size(); i++)
    {
        vector[i].printService();
    }
    return 1;
}

int f2() {
    std::cout << "SKIBIDI DOP YES YES YES YES\n\n";
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
    std::cout << "function f3 is running...\n\n";
    return 6;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int const ITEM_QUANTITY = 6;

    MenuItem items[ITEM_QUANTITY]
    {
        MenuItem{ "Punkt 1",f1 },
        MenuItem{ "Punkt 2",f2 }, 
        MenuItem{ "Punkt 3",f3 },
        MenuItem{ "Punkt 4",f4 },
        MenuItem{ "Punkt 5",f5 }, 
        MenuItem{ "Punkt 6",f6 },
    };

    Menu menu(items, ITEM_QUANTITY);

    while(menu.runMenu()){}

    return 0;
}