//
// Created by alvin on 2022/12/13.
//
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

void printN_v1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << n;
    }
    cout << endl;
}

void printN_v2(int n)
{
    if (n)
    {
        printN_v2(n - 1);
        cout << n;
    }
    cout << endl;
}

int main()
{
    int N[] = {10, 100, 1000, 10000}; // 测试数据
    double duration;
    vector<double> t1; // 迭代耗时
    vector<double> t2; // 递归耗时

    clock_t start, finish;
    for (int i = 0; i < 4; i++)
    {
        start = clock();
        printN_v1(N[i]);
        finish = clock();
        duration = (double)(finish - start) / CLOCKS_PER_SEC;
        t1.push_back(duration);

        start = clock();
        printN_v2(N[i]);
        finish = clock();
        duration = (double)(finish - start) / CLOCKS_PER_SEC;
        t2.push_back(duration);
    }

    cout << endl
         << "\tIteration \trecursion" << endl;
    for (int i = 0; i < t1.size(); i++)
    {
        cout << N[i] << ":\t" << t1[i] << "\t\t" << t2[i] << endl;
    }

    return 0;
}