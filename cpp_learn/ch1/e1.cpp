#include <iostream>
#include <string>
using namespace std;

int max(int,int);

int main()
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    cout << "Hello, "
         << user_name
         << " ... and goodbye!\n";

    // namespace 就是为了解决重命名问题,
    //类似于python不同的库和包有同样的方法名
    // int cin = 9;
    // cout << cin;

    cout << max(100000,5);

    return 0;
}

int max(int a, int b){
    int result;
    if (a > b)
        result = a;
    else
        result = b;

    return result;
}