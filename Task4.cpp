#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void output(int otvet) //вывод
{
    cout << otvet;
}

void solution(ifstream& file) //сравнение со считыванием из файла
{

    string s;
    int x = 0;
    while (getline(file, s, '\n')) //считаем кол-во строк и их значение, катаем все в s
    {
        x++;
    }

    output(x);
}

void input() //ввод(текста)
{
    ifstream file("text.txt");
    solution(file);
    file.close();
}

int main() //писать тут ничего не буду, и так все понятно;)
{
    input();
    return 0;
}
