#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    

    string mas[13] = {};
    mas[1] = { "Січень Jenuary " };
    mas[2] = { "Лютий February " };
    mas[3] = { "Березень March " };
    mas[4] = { "Квітень April" };
    mas[5] = { "Травень May" };
    mas[6] = { "Червень June" };
    mas[7] = { "Липень July" };
    mas[8] = { "Серпень August" };
    mas[9] = { "Вересень September" };
    mas[10] = { "Жовтень October" };
    mas[11] = { "Листопад November" };
    mas[12] = { "Гдудень December" };

    int x = 0;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   

    cout << "Enter number of month:";
    cin >> x;
    cout << x << "number of month is:" << mas[x];

}