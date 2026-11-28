// Пересборка программы Високосный год

#include<iostream>
#include <cstdint> 

using namespace std;

bool leapyear (uint16_t year){                          // Для параметра year  задан тип uint16_t - это синоним usingned short. 
    return (((year%100)&&(!(year %4)))||(!(year%400))); //  Короткое целое имеет 16 бит верхняя граница 65 535
  
}

int main (){

    uint16_t year{1};
    cout << "Для завершение работы ведите 0.\n";

    while (year > 0){

        cout << "Задайте год: ";cin >> year;

        if (leapyear(year))

            cout << "Год высокосный!\n";

        else cout << "ГОд не високосный\n";

    }
}