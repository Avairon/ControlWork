#include <iostream>

using namespace std;

void output(string otvet) //вывод
{
    cout << otvet;
}

void solution(int x, int y) //сравнение
{

    string otvet;

    if (x > 0 && y > 0) {
        otvet = "I";
    } if (x < 0 && y>0) {
        otvet = "II";
    } if (x < 0 && y < 0) {
        otvet = "III";
    } if (x > 0 && y < 0) {
        otvet = "IV";
    }

    output(otvet);
}

void input() //ввод
{
    int x, y;
    cin >> x >> y;

    solution(x, y);
}

int main() 
{
    input();
    return 0;
}