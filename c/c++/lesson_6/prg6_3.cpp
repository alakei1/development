/*Опять таблица умножение*/
#include <iostream>

using namespace std;

int main (){
    unsigned int number {};
    unsigned int count {1};
    cout << "Ведите множитель  : " ; cin >> number;

    while (count < 10 ){
        cout << count << '*' << number << '=' << count * number << endl;
        ++count;
    }
}