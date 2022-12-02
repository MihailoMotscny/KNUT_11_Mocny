#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    int n = 0;
    int finish = 0;
    int s;
    vector<int> v = { 3,2,1,4,5,6,8,7,9,10,15,12,13,14,11 };
    //


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //
    sort(v.begin(), v.end());
    

    while(n!=15)
    {
        cout << "  " << v[n];
        n += 1;
    }
        
}