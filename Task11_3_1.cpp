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

    string mass[5][5];
    int i, j, n, m;
    n = 5;
    m = 5;

    //1
    mass[0][0] = "1";
    mass[0][1] = " 0";
    mass[0][2] = " 0";
    mass[0][3] = "0";
    mass[0][4] = " 6";

    //2
    mass[1][0] = "2";
    mass[1][1] = "11";
    mass[1][2] = " 0";
    mass[1][3] = "14";
    mass[1][4] = "7";

    //3
    mass[2][0] = "3";
    mass[2][1] = "12";
    mass[2][2] = "17";
    mass[2][3] = "15";
    mass[2][4] = "8";

    //4
    mass[3][0] = "4";
    mass[3][1] = "13";
    mass[3][2] = " 0";
    mass[3][3] = "16";
    mass[3][4] = "9";

    //5
    mass[4][0] = "5";
    mass[4][1] = " 0";
    mass[4][2] = " 0";
    mass[4][3] = "0";
    mass[4][4] = "10";
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << mass[i][j]<<"     ";
        }
        cout << " " << endl;
    }



    
}