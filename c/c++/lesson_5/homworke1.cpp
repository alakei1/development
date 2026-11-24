#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
/*Написать программу, которая по заданным трем сторонам вычисляет площадь
треугольника. Для вычисления площади использовать формулу Герона (найдите
в Интернете). Программа должна проверять существование треугольника.*/

    double x, y, z;

    cout << "Введите стороны треугольника (x, y, z): ";
    cin >> x >> y >> z; 

    double m = max({x, y, z});
    char name = (m == x) ? 'x' : ((m == y) ? 'y' : 'z');

    if (m >= (x + y + z - m)) { 
        
        cout << "Треугольник не может существовать,\n"
             << "так как " << name << " = " << m << " и больше (или равна) сумме двух других."
             << endl;
    } else {
        double p = (x + y + z) / 2.0;
       
        double s = sqrt(p * (p - x) * (p - y) * (p - z)); 
        
        cout.precision(10); 
        cout << "Площадь треугольника = " << s << endl;
    }

    return 0;
}
