#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void output(string otvet) //вывод
{
    cout << otvet;
}

void solution(string number) //работа с массивом
{
    string s;
    if (number[0] == '8' && number[1] == '9') 
    {
        s += "+79";
        for (int i = 2; i < number.size(); i++)  //так сказать приписывание всех чисел из массива к переменной s для создания номера
        {
            s += number[i];
        }
        output(s);
    }
    else
    {
        output("Wrong number!");
    }

}

void input() //ввод
{

    string number; //конвертация числовой переменной в текстовую
    cin >> number;
    if (number.size() == 12) //подсчет длины(в символах)
    {
        solution(number);
    }
}

int main() 
{
    input();
    return 0;
}