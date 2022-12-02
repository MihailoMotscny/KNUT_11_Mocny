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
    int a, b;
    int sum = 0;
    int finish = 0;
    int s;
    vector<int> v = { 3,2,1,4,5,6,8,7,9,10,15,12,-1,13,14,11,1,-2,16 };
    s = v.size();
    cout << "Print a:"  ;
    cin >> a;
    cout << ' ' << endl;
    cout << "Print b:";
    cin >> b;







    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    //max elem
    cout << "Max elem=" << v[0] << endl;

    //sum elem mas
    while (n != s)
    {
        if (v[n] > 0)
        {
            sum += v[n];
            n += 1;
        }
        else
        {
            n += 1;
        }
    }
    cout << "Sum elem mas=" << sum << endl;

    //Delete modul and reprint zero
    reverse(v.begin(), v.end());
    while (f != s)
    {


        if (a <= abs(v[f]) && abs(v[f]) <= b)
        {
            v[f] = 0;
            f += 1;
        }
        else
        {
            f += 1;
        }
   
    }
    while (i != v.size())
    {
        cout << v[i]<<"  " ;
        i += 1;
    }
}