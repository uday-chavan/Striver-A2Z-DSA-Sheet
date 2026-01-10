#include <iostream>
using namespace std;

// Basic Recursion Problems //

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

void sumOfFirstNparameterized(int i, int sum)
{
    if (i < 1)
    {
        cout << (sum) << " ";
        return;
    }
    sumOfFirstNparameterized(i - 1, sum + i);
}

int sumOfFirstNfunctional(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfFirstNfunctional(n - 1);
}

int factorialOfN(int n)
{
    if (n == 0)
        return 1;
    return n * factorialOfN(n - 1);
}

void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

bool checkstringIsPalindromeOrNot(int i, const string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return checkstringIsPalindromeOrNot(i + 1, s);
}

bool isPalindrome(string s)
{
    string cleaned = "";

    for (char c : s)
    {
        if (isalnum(c))
            cleaned += tolower(c);
    }
    return checkstringIsPalindromeOrNot(0, cleaned);
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacci(n - 1);
    int secondlast = fibonacci(n - 2);
    return last + secondlast;
}

int main()
{
    cout << fibonacci(4);
    return 0;
}

// stringIsPalindromeOrNot //

// string s = "A man, a plan, a canal: Panama";
// cout << isPalindrome(s);
// return 0;

// ReverseArray//

// int n;
// cin >> n;
// int arr[n];
// for (int i = 0; i < n; i++)
//     cin >> arr[i];

// reverseArray(0, arr, n);

// for (int i = 0; i < n; i++)
//     cout << arr[i] << " ";

// return 0;
