// Високосный год (while)

#include<iostream>

using namespace std;

int main () {
    unsigned int year {1};

    cout << "Для завершение работы нажмите 0\n";
    
    while (year > 0){
        cout << "Загадайте год :"; cin >> year;
        
        if (((year % 100)&&(!(year %4))) || (!(year % 400)))
            cout << "Год високосный!\n";
        else cout << "Год не високосный\n";
    }

    cout << "Завершаем работу!";

    return 0;
}