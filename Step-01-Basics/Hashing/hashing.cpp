#include <bits/stdc++.h>
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
// int main()
// {
//     string s;
//     cin >> s;

//     // pre compute
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cin >> c;
//         // fetch
//         cout << hash[c - 'a'] << endl;
//     }
//     return 0;
// }

// map - ordered & unordered map //

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre compute
    map<int, int> mpp; // for unordered, use - unordered_map<int, int>
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate in the map (if want to see how elements are stored in map)
    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}

// if lower case characters = s[i] - 'a' & c - 'a'
// if upper case characters = s[i] - 'A' & c - 'a'
// if all characters, i.e., hash[256] = only s[i] & c[i]

// array hashing can go upto 10^6 in main or 10^7 globally

// Anything storing or fetching in map take log N in all best, svg, worst time complexity.
// always give first preference to unordered map because the worst case happens very rarely due to internal collisionsb;if such happens then you should switch to map. (unordered_map[])

// Hashing //

// Division method
// Folding method
// Mid Square method