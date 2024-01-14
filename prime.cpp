#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number";
    cin >> num;
    if (num % 2 && num != 0)
    {
        cout << "number is prime ";
    }

    else
    {
        cout << "no is not prime";
    }
    return 0;
}