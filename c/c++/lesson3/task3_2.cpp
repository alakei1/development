/*Товар стоил X рублей, по акции скидка составляет A процентов. Сколько стоит
товар по акции? (A и X — целые, цена со скидкой — вещественное). Вывести
ответ с двумя знаками после запятой.*/

#include <iostream>



using namespace std;



int main(){
    cout << fixed;
    cout.precision(2);

    cout << "Цена товара"<< '\n' << "-> ";
    double product; cin >> product;
    cout << "Скидки" << '\n'<< "-> ";
    double sale ; cin >> sale;

    const double produkt_sale{product - (product/100)*sale}; 
    cout << "цена со скидкой "<<'\n'<< "-> "<< produkt_sale << endl;

    return 0;
}