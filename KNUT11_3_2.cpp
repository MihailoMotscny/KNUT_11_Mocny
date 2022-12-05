#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int mass[7][5];
    int i, j, n, m,znach,x,y,l,p,sum,b;
    n = 5;
    m = 5;
    l = 1;
    p = 0;
    sum = 0;
    x = 0;
    b = 0;

    cout << "Введіть значення Z:";
    cin >> znach;

    //1
    

    //2
    mass[1][0] = 2;
    mass[1][1] = 1;
    mass[1][2] =  0;
    mass[1][3] = 14;
    mass[1][4] = 7;

    //3
    mass[2][0] = 3;
    mass[2][1] = 1;
    mass[2][2] = -5;
    mass[2][3] = 1;
    mass[2][4] = 8;

    //4
    mass[3][0] = 4;
    mass[3][1] = 13;
    mass[3][2] =  0;
    mass[3][3] = -1;
    mass[3][4] = 9;

    //5
    mass[4][0] = 5;
    mass[4][1] =  0;
    mass[4][2] =  0;
    mass[4][3] = 0;
    mass[4][4] = 10;

    


    //Задача 1
    while (x != 24)
    {
        
        while (p!= 5)
        {
            
            if (mass[l][p] > znach)
            {
                sum += 1;
                l += 1;
                x += 1;
                
            }
            else
            {
                x += 1;
                l += 1;
            }
            if (l == 5)
            {
                mass[0][b] = sum;
                b += 1;




                p += 1;
                l = 0;
                sum = 0;
            }
        }
    }   





    //вивід масива
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << mass[i][j] << "     ";
        }
        cout << " " << endl;
    }
    cout << " " << endl;


    //Вивід відповіді на 1 завдвння
    for (int y = 0; y < m; y++)
    {
        cout << mass[0][y] << "     ";
    
    }
    cout << " " << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "Кількість значень більших за Z в кожному із рядків "<<endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << " " << endl;
    



    //Задача 2
    int dob = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mass[i][j] < 0)
            {
                dob *= mass[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    cout << " " << endl;
    cout << "Добуток від'ємних значень масива= "<<dob;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;





}