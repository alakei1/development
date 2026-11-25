//Оператор do while
/*В С++ включен другой оператор цикла, в котором условие проверяется после выполнения тела цикла.
Форма записи цикла с постусловием следующая: do оператор; while(условие);*/
#include <iostream>

using namespace std;

int main (){
    int number;
    cout << "Ведите множитель с 0 до 9 "; cin >> number;

    if ((number >= 0) && (number <= 9))
        {
            int count = 1;
            do {
                cout << number << '*' << count << '=' << number * count << endl;
                ++count;
                }
            while (count < 10);

        } 
    else cout << "Неверное значение множителя!" << endl;

}