//
// Created by alvin on 2022/12/7.
//

//#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <malloc.h>
using namespace std;
#define OK 1
#define ERROR -1
#define TRUE 1
#define FALSE 0
#define N 1000
typedef int Status;

int main()
{
    //定义两个变量i,j,一个数组a[N]
    int i, j, a[N];
    //将数组初始化为1,a[i] = 1表示i为素数
    //初始时默认从2到N-1均为素数
    for(i = 2; i < N; i++ )
    {
        a[i] = 1;
    }
    //遍历数组找出下标为素数的,并将所有下标为该素数的倍数的值改为0
    for(i = 2; i < N; i++)
    {
        if(a[i])
        {
            for(j = i; i*j < N; j++)
            {
                a[i*j] = 0;
            }
        }
    }
    //输出2~N范围内的素数
    for(i = 2; i < N; i++)
    {
        if(a[i])
        {
            printf("%4d", i);
        }
    }
    return 0;
}