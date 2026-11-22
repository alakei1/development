/*
Модифицируем первую програму вместо вывода 
Hellow World! сделаем ->
+--------------+
| Hello world! |
+--------------+

*/
#include <iostream>

using namespace std;

int main (){
    cout << "+------------+" << endl ;
    cout << "|Hellow World|" << endl ;
    cout << "+------------+" << endl ;
    return 0 ;
}
// Но данный код можно сократить  
#include <iostream>

using namespace std;

int main (){
    cout << "+------------+\n|Hellow World|\n+------------+" << endl ;
    return 0 ;
}

#include <iostream>
using namespace std;
int main(){
    cout<< "+------------+" << endl 
        << "|Hellow World|" << endl 
        << "+------------+" << endl ;
    return 0 ;
}