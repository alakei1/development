/*Сумма цифр трехзначного числа кратна 7, само число также делится на 7. Найти
все такие числа.*/

#include <iostream>

int main() {
    using namespace std;
    int digit {};

    for (int number {100}; number < 1000; ++number) {
        
        
        if (!(number % 7)) {
            
            
            digit = (number / 100) + ((number / 10) % 10) + (number % 10);
           
            
            if (!(digit % 7)) {
                cout << "-> " << number << endl;
            }
        }
    }
    
    return 0;
}
