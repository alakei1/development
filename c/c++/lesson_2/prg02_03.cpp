// вывод по русски в системе Windows в системе существует множество русификаторов воспользуемся функцией system
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("chcp1251>null");
    cout << "Привет, Миру!" << endl;
    return 0;
}

