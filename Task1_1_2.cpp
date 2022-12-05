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
    int zada;
    zada = 0;
    cout << "Задачу під яким номером ви хочете перевірити?(1-3):";
    cin >> zada;
    if (zada !=2 && zada!=3)
    {




        int rpk, pkr, rbab, n, vr, sumr, mistvk;
        vr = 1;
        sumr = 0;
        n = 0;
        vector<int> v = { 3,2,1,4,5,6,8,7,9,10,15,12,-1,13,14,11,1,-2,16 };

        

        //Задача 1
        cout << "Введіть кількісь рядів бабусь:";
        cin >> rbab;
        cout << ' ' << endl;
        cout << "Введіть кількість рядів комп'ютерів:";
        cin >> rpk;
        cout << ' ' << endl;
        cout << "Введіть кількість комп'ютерів в ряду:";
        cin >> pkr;
        cout << ' ' << endl;

        //Кількість бабусь
        while (n != rbab)
        {
            sumr += vr;
            vr += 1;
            n += 1;

        }
        cout << "Кількість бабусь=" << sumr << endl;
        cout << ' ' << endl;

        //Кількість ПК в класі
        mistvk = rpk * pkr;

        if (mistvk >= sumr)
        {
            cout << "Всі бабусі сіли за пк!!!Залишилося " << mistvk - sumr << " вільних місць" << endl;
            cout << ' ' << endl;
        }
        else
        {
            cout << "Місць не вистачило(";
            cout << ' ' << endl;
        }
    }




    if (zada !=1 && zada !=3)
    {
        //Задача 2
        int x, y;
        int sum = 0;
        cout << "Enter the number: ";
        cin >> x;
        for (; x > 0;)
        {
            y = x % 10;
            sum += y;
            x /= 10;
        }
        cout << sum << endl;
    }




    if(zada==3)
    {
        //Задача 3
        float procent, sumsum, finish, finish1;
        int j, sizz, rah;


        j = 0;
        cout << "Введіть кількість рахунків: ";
        cin >> rah;
        cout << "Введіть відсоток відрахувань: ";
        cin >> procent;
        cout << ' ' << endl;
        cout << "Введіть суму на рахунках: ";
        cin >> sumsum;
        finish = 0;


        for (int i = 0; i < rah; ++i)
        {
            finish += sumsum;
            if (i != 0)
            {
                finish = finish - ((finish * procent) / 100);
            }
        }
        cout << "Найбільша сума на рахунку фірми=" << finish;
    }



    

    








   

    
}