#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter youe first name: ";
    cin >> user_name;
    cout << '\n'
         << "Hello, "
         << user_name
         << " ... and goodbye!\n";

    // namespace 就是为了解决重命名问题,
    //类似于python不同的库和包有同样的方法名
    // int cin = 9;
    // cout << cin;

    return 0;
}