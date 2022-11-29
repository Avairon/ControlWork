#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void output(char otvet)  //вывод
{
    ofstream file1("sometext(modify).txt", ios::app);
    file1 << otvet;
    file1.close();
}

void solution(ifstream& file) //считывание и взаимодействие с текстом из файла
{
    string s;
    while (getline(file, s, '\n')) 
    {
        for (char c : s) 
        {
            char liter_down = c + 32;
            output(liter_down);
        }
        output('\n');
    }
}

void input()  //ввод с использованием файла
{

    ifstream file("sometext.txt");
    solution(file);
    file.close();
}

int main() 
{
    input();
    return 0;
}
