/*Напишем несколько программ, в которых условный оператор используется более
интенсивно и в разнообразных ситуациях. Сначала заново напишем программу для
решения уравнения ax + b = 0.*/

#include<iostream>

using namespace std;

int main(){
    double a{} ,b{};

    cout << "Задайте a и b: \n";
    cout << "a = "; cin >> a ;
    cout << "b = "; cin >> b ;
    double x{};cout.precision(10);
    
    if (a!=0)
        x = -b/a , cout << "x = " << a;
    else if(b==0)
        cout << "x - любое";
    else
        cout << "нет решение";
    cout << endl;
}