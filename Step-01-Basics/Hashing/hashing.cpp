#include <iostream>
using namespace std;

// number hashing //
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;

//         cout << hash[number] << endl;
//     }
//     return 0;
// }

// character hashing //

int main()
{
    string s;
    cin >> s;

    // pre compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}
// if lower case characters = s[i] - 'a' & c - 'a'
// if upper case characters = s[i] - 'A' & c - 'a'
// if all characters, i.e., hash[256] = only s[i] & c[i]

// array can go upto 10^6 in main or 10^7 globally
