#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int FibonacciSlow(const int whichFibo)
{
    if (whichFibo == 0)
        return 0;
    if (whichFibo == 1)
        return 1;
    return FibonacciSlow(whichFibo - 1) + FibonacciSlow(whichFibo - 2);
}

long long FibonacciFast(const int whichFibo)
{
    vector<long long> f;
    f.push_back(0);
    f.push_back(1);

    if (whichFibo == 0)
        return f[0];
    if (whichFibo == 1)
        return f[1];

    for (int i = 0; i <= whichFibo; i++)
    {
        f.push_back(f[i] + f[i + 1]);

        if (f.size() > whichFibo)
        {
            return (long long)(f[whichFibo - 1] + f[whichFibo - 2]);
        }
    }
}

int main()
{
    int x;
    cout << "Bulmak istediginiz fibo sayisini giriniz\n";
    cin >> x;
    cout << FibonacciFast(x);
    return 0;
}