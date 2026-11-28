#include <iostream>
#include <string>        //Для работы со строками


using namespace std;

int main(){
    cout << "Как вас Зовут?" << endl;
    string name; // переменная для хранение // Переменная это объект, который имеет название211 

    cin >> name; // ввод имени             

    cout <<"Привествую вас, " << name << "!" << endl;
    return 0;
}
 /*индефикатор cin это имя системного объекта который представляет в программе входной поток символов charecter input stream*/