#include <iostream>
#include <limits>       //можно выяснить диапазон и точность STL

using namespace std;


int main(){
    /*
    numeric_limits(числовые пределы) в программме использется для получение характеристик вещественных чисел.
    numeric_limits<тип>::min()   -> минимальное допустимое значение для заданого типа
    numeric_limits<тип>::max()   -> максимальное допустимое значение для заданого типа
    numeric_limits<тип>::digits  -> точность матисы в десятичных цифрах
    */
cout << "float numbers " << endl;
cout << numeric_limits<float> :: min() << endl;
cout << numeric_limits<float> :: max() << endl;
cout << numeric_limits<float> :: digits10 << endl;
cout << "double numbers" << endl;
cout << numeric_limits<double> :: min() << endl;
cout << numeric_limits<double> :: max() << endl;
cout << numeric_limits<double> :: digits10 << endl;
cout << "long numbers" << endl;
cout << numeric_limits<long> :: min() << endl;
cout << numeric_limits<long> :: max() << endl;
cout << numeric_limits<long> :: digits10 << endl; 
    return 0;
}