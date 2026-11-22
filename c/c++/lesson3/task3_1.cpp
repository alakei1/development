/* Ввести с клавиатуры два числа (в интервале от 0 до 9999). Вывести их на экран
столбиком в виде, удобном для сложения или умножения, т. е. первый разряд
(справа налево) первого числа под первым разрядом второго числа, второй раз-
ряд — под вторым, третий — под третьим.*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << " Ведите два числа - " << endl;

    cout << "->\t";string num_1; cin >> num_1;   
    cout << "->\t";string num_2; cin >> num_2;
    cout << "=======================" << endl;

    const int len_1 (num_1.length());
    const int len_2 (num_2.length());

    if (len_1 > len_2){
        const string discharge(len_1-len_2,' ');
        cout 
            << discharge+num_2<< '\n'
            << string(len_1,'-')<< '\n'
            << num_1 << endl;

    }
    else if(len_2>len_1){
        const string discharge(len_2-len_1,' ');
        cout 
            << discharge+num_1<< '\n'
            << string(len_2,'-')<< '\n'
            << num_2 << endl;
    }
    else{
        cout 
        << num_1<< '\n'
        << string(len_2,'-')<< '\n'
        << num_2 << endl;
    }
}