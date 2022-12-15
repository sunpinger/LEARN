//
// Created by alvin on 2022/12/12.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int* lcg(int seed,int n);

int main()
{
    int *result = lcg(23142,10);
    for(int i =0;i<10;i++)
    {
        cout << result[i] << '\t';
    }
    cout << endl;
    return 0;
}

int* lcg(int seed ,int n)
{
    int* result = new int[n];
    long long int temp = seed;
    for(int i = 0;i<n;i++)
    {
        temp = (25214903917*temp +11) % (int)pow(2,48);
        result[i] = temp;
    }
    return result;
}
