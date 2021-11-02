#include <iostream>
using namespace std;

int EuclidenGCD(int a, int b)
{
    if (b == 0)
    {
        cout << a;
    }
    a = a % b;
    EuclidenGCD(b, a);
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    EuclidenGCD(a, b);

    return 0;
}