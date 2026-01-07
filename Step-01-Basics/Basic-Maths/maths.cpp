#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
// Time complexity - if the division is happening by 10 ,,
// the time complexity is O(log base 10 (N))
// If the division is happening by 5 ,,
// the time complexity is O(log base 5 (N))

int reverseNumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;

        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;

        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
};

bool checkPalindrome(int x)
{
    if (x < 0)
        return false;

    int copy = x;
    int rev = 0;

    while (x != 0)
    {
        int digit = x % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return false;
        rev = rev * 10 + digit;
        x = x / 10;
    }
    return rev == copy;
}

int highestCommonFactor(int n1, int n2)
{
    int hcf = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
} // O(min(n1, n2))

int euclideanAlgo(int a, int b)
// hcf(a, b) = hcf(a-b, b)
// till one of the number gets 0
// when one number gets 0, the other one is hcf
// also we take bigger number first
// if the first number becomes smaller we swap the numbers
// this takes a lot of steps
// so in better sense - hcf(a,b) = hcf(a%b,b)

// Old way (subtracting):

// 48 - 18 = 30
// 30 - 18 = 12
// 18 - 12 = 6
// 12 - 6 = 6
// 6 - 6 = 0 → HCF = 6
// Many steps!

// Better way (using %):

// 48 % 18 = 12
// 18 % 12 = 6
// 12 % 6 = 0 → HCF = 6

{
    while (a > 0 & b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
} // time complexity = O(log base Φ(fi) (min(a,b)))

int armstrongNumber(int n)
{
    int duplicateN = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    return sum == duplicateN;
}

int printAllDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int mathematicalObservation(int n)
{
    vector<int> ls;
    for (int i = 1; i <= i * i <= (n); i++)
    // for sqrt(n) use i*i<=(n)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

bool checkforPrime(int n)
{
    int counter = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            counter++;
            if (n / i != i)
                counter++;
        }
    }
    return counter == 2;
}

int main()
{
    int n1;
    cout << "Enter your number: ";
    cin >> n1;
    if (checkforPrime(n1))
        cout << "true";
    else
        cout << "false";
    return 0;
}