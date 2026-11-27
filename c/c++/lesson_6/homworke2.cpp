/*Для заданного натурального n найти все тройки чисел a, b, c, для которых вы-
полняется равенство n = a + b + c.*/

#include <iostream>
#include <string>

using namespace std;

int main (){
    int number {};
    int a{};
    int c{};
    int count {};

    cout << "Ведите числов -> "; cin >> number;

    for( a ; (a <= number); ++a)
        {
            

        for (int b {}; b<= number; ++b)
            {
                c = (number - (a+b));
                if (number == (a + b + c) && c >= 0)
                    {
                        ++count;
                        cout << number 
                            << "=" << a 
                            << "+" << b 
                            << "+"
                            << (number - (a+b))<< '\n';
                    }
                    
            }
            
        }

    cout << string(20 ,'=') << '\n';
    cout << "Итого комбинаий: " << count << endl;

}


