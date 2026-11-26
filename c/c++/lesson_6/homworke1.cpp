/*Квадрат трехзначного числа оканчивается тремя цифрами, которые как раз и яв-
ляются этим числом. Написать программу, которая находит все такие трехзнач-
ные числа*/
#include <iostream>


using namespace std;

int main (){

    int num {100};
    
    const char* words = "Последнии 3 числа возведенного в квадрат равны числу ";
    
    while (num < 1000){

        int square_num = num*num;
        if ((square_num%1000) == num) 
            cout << words << num << ' = '<< square_num << '\n';
        ++num;
    }


}