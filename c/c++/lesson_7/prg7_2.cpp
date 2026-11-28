// Матемтические функции с числом pi

#include<iostream>
#include<cmath>

using namespace std;

double pi () {return acos(-1.0);}

double circumference (double r){        //длина окружности
    return 2*pi()*r;
}

double  circlearea(double r){           //площадь круга 
    return pi()*r*r;
}

double ballvolume (double r){           //объем шара
    return 4.0/3*pi()*r*r*r;
}

int main(){
    cout.precision(12);
    cout << circumference(1.0)<<'\n';
    cout << circlearea(1.0)<<'\n';
    cout << ballvolume(1.0)<<'\n';    
}

