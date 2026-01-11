#include <bits/stdc++.h>
using namespace std;

// number hashing //
void numberHashing()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }
}

// character hashing //
void characterHashing()
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
}

// map - ordered & unordered map //
void orderedUnorderedMap()
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
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

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

int main()
{
    orderedUnorderedMap();
    return 0;
}

// if lower case characters = s[i] - 'a' & c - 'a'
// if upper case characters = s[i] - 'A' & c - 'a'
// if all characters, i.e., hash[256] = only s[i] & c[i]

// array hashing can go upto 10^6 in main or 10^7 globally

// Anything storing or fetching in map take log N in all best, avg, worst time complexity.
// always give first preference to unordered map because the worst case happens very rarely due to internal collisions like if there are all value ending with 8, all will store there values in 8 and remaning will be empty;if such happens then you should switch to map. (unordered_map[])

// Hashing //

// Division method => arr[i] % 10 , and store the value in hash and retrieve the value from that hash
// Folding method
// Mid Square method