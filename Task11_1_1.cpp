#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    

    string mas[13] = {};
    mas[1] = { "ѳ���� Jenuary " };
    mas[2] = { "����� February " };
    mas[3] = { "�������� March " };
    mas[4] = { "������ April" };
    mas[5] = { "������� May" };
    mas[6] = { "������� June" };
    mas[7] = { "������ July" };
    mas[8] = { "������� August" };
    mas[9] = { "�������� September" };
    mas[10] = { "������� October" };
    mas[11] = { "�������� November" };
    mas[12] = { "������� December" };

    int x = 0;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   

    cout << "Enter number of month:";
    cin >> x;
    cout << x << "number of month is:" << mas[x];

}