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
    int a = 0;
    int b = 0;
    int sum = 0;
    int finish = 0;
    int s;
    int dob=1;

    vector<int> v = { -1,-2,-3,-4,-5,1,2,3,4 };
    s = v.size();
    








    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //підрахунок добутку від'ємних чисел та суми додатніх
    sort(v.begin(), v.end());
    while (n != s)
    {
        
        if (v[n] < 0)
        {
            dob = dob * v[n];
            n += 1;
        }
        else
        {
            sum += v[n];
            n += 1;
        }
        
    }
    //вивід даних 
    cout << "Product of negative num=" << dob << endl;
    cout << "Sum of positive num=" << sum << endl;

    
    



    
    reverse(v.begin(), v.end());
    while (i != v.size())
    {
        cout << v[i] << "  ";
        i += 1;
    }
}