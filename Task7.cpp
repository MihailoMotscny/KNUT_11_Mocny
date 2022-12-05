#include <iostream>
#include <string>
#include <stdlib.h>
#include <Windows.h>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    int n = 0;
    int f = 0;
    int i = 0;
    int p = 0;
    int l = 0;
    int g = 0;
    int q;
    q = rand();
    class u;

    int sum_pos_num_ind = 0;
    int a, b;
    int sum = 0;
    int finish = 0;
    int s;
    vector<int> v = { 1,2,3,4,5,-1,-2,-3,-4, };
    s = v.size();

    int mas[10] = {};









    //
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    

    //sum elem mas
    while (n != s)
    {
        if (v[n] > 0)
        {
            sum += v[n];
            n += 1;
            sum_pos_num_ind += 1;
        }
        else
        {
            n += 1;
        }
    }
    

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

    cout << q << "  ";


    


}