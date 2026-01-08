#include <iostream>
using namespace std;

void nTimes(int i, int n)
{
    if (i > n)
        return;

    cout << "uday" << " ";
    nTimes(i + 1, n);
}

void one2N(int i, int n)
{
    if (i > n)
        return;

    cout << i << " ";
    one2N(i + 1, n);
}

void n2One(int i, int n)
{
    if (i < 1)
        return;
    cout << i << " ";
    n2One(i - 1, n);
}

void one2Nwithoutiplusone(int i, int n)
{
    if (i < 1)
        return;
    one2Nwithoutiplusone(i - 1, n);
    cout << i << " ";
}

void n2Onewithoutminusone(int i, int n)
{
    if (i > n)
        return;
    n2Onewithoutminusone(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    n2Onewithoutminusone(1, n);
    return 0;
}