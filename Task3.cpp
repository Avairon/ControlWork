#include <iostream>

using namespace std;

void output(string number) //вывод
{
    cout << number;
}

void solution(string number) //цикл по массиву
{

    for (int i = 0; i < number.size(); i++) {
        for (int j = i + 1; j < number.size(); j++) {
            if (number[i] == number[j]) {
                output("true");
                return;
            }
        }
    }
    output("false");
}

void input() //ввод
{
    string number;
    cin >> number;

    solution(number);
}

int main()
{
    input();
    return 0;
}