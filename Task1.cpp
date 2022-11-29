#include <iostream>

using namespace std;

int main()
{
    int number_one, number_two;
    cin >> number_one >> number_two;  //вводим числа

    if (number_one > number_two) //проверяем какое из чисел больше, и выводим наибольшее
    {
        cout << number_one;
    }
    else
    {
        cout << number_two;
    }

    return 0;
}