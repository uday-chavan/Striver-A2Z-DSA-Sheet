#include <iostream>
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
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << boolalpha << checkPalindrome(x) << " ";
}