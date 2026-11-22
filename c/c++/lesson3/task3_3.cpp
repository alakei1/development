/*
Написать программу, которая вычисляет площадь треугольника по высоте и ос-
нованию. Ответ вывести с точностью до четырех знаков после запятой.
*/
#include <iostream>



using namespace std;



int main(){
    cout <<fixed;
    cout.precision(2);
    cout 
        << "ведите высоту треугольника\nh-> ";
        double h; cin >> h;
    cout
        << "Ведите основание треугольника\na-> ";  
        double a; cin >> a;
    const double s{0.5*a*h};
    cout << "S= "<< s << endl;

    return 0;


}