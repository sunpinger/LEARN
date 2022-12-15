//
// Created by alvin on 2022/12/8.
//
#include <iostream>
using namespace std;
#define N 10000
#define epsilon 1.0/N
int main()
{
    double e = 1.0;

    for (int i = 0; i < N; i++)
    {
        e = e * (1+epsilon);
    }
    cout << scientific << e << endl;

    return 0;
}


