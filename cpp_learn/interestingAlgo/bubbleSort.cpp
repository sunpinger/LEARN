//
// Created by alvin on 2022/12/13.
//
#include <iostream>

using namespace std;

void bubbleSort(int *pointer, int n);

int main()
{
    int test[] = {9, 10, 321, 31, 12, 32, 432, 65, 64, 32, 524376, 2436};

    bubbleSort(test, 12);
    for (int i = 0; i < 12; i++)
    {
        cout << test[i] << '\t';
    }
    cout << endl;
    return 0;
}



void bubbleSort(int *pointer, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (pointer[j] > pointer[j + 1])
            {
                int temp = pointer[j + 1];
                pointer[j + 1] = pointer[j];
                pointer[j] = temp;
            }
        }
    }
}
