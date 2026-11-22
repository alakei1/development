// матиматическое вычесление с помощью числа pi


#include <iostream>
#include <cmath>


using namespace std;

int main(){
double const pi {acos (-1.0)};
cout.precision(10);
double r {0.0};
cout << "Задайте радиус: "; cin >> r ;
double L {2*pi*r};
cout << "Длина окружности\t =  " << L << endl;
double S {pi*r*r};
cout << "Площадь круга\t = " << S << endl ;
double V {4.0/3*pi*r*r*r};
cout << "Объем шара\t = " << V << endl;
return 0;

}