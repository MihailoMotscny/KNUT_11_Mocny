#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    int n = 0;
    int f = 0;
    int i = 0;
    int cou = 0;
    int a, b;
    int sum = 0;
    int finish = 0;
    int s;
    int mas[10] = {};
    int g = 0;
    int p = 0;

    vector<int> v = { 1,2,3,4,5,-1,-2,-3,-4,-5 };
    
    
    
    int mass[10]={};






    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //
    sort(v.begin(), v.end());
    

    //out min 
    cout << "Min =" << v[0]<< endl; 

    //Зміна порядку масива
    while (p != v.size())
    {
        if (abs(v[p]) > 1)
        {
            p += 1;

        }
        else
        {
            mas[g] = v[p];
            p += 1;
            g += 1;
        }
    }

    //Допис інших елементів
    p = 0;

    while (p != v.size())
    {
        if (abs(v[p]) > 1)
        {
            mas[g] = v[p];
            p += 1;
            g += 1;

        }
        else
        {

            p += 1;

        }
    }










    

    while (i != v.size())
    {
        cout << mas[i]<<"  " ;
        i += 1;
    }
}







