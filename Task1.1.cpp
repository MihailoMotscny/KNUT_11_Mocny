#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    int n = 0;
    int finish=0;
    
    vector<int> v = { 3,4,5,3,23,4,5,6,35,23,34,5,6,7,4,34,2,3,24,3,53,4,99,100 };
    //
    

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //обробка та вивод данних
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    finish = v[1];
    while (finish == v[1])
    {
        if (v[n] == v[n + 1])
            n += 1;
        else
            finish = v[n + 1];
        break;

    
    }
    cout <<"Відповідь:  " << finish;
}   
