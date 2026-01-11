#include <bits/stdc++.h>
using namespace std;

void countFrequencyOfEachElement(int arr[], int n)
{
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

void countFreqOptimal(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto &x : map)
    {
        cout << x.first << " " << x.second << endl;
    }
}

void freqOfMostFreq(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());

    long long sum = 0;
    int left = 0;
    int ans = 1;

    for (int right = 0; right < nums.size(); right++)
    {
        sum += nums[right];

        while ((long long)nums[right] * (right - left + 1) - sum > k)
        {
            sum -= nums[left];
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << "Maximum frequency = " << ans << endl;
}

int main()
{
    // for countFreqofEachElement
    int arr[] = {10, 23, 45, 43, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    // because, sizeof(arr) = 6 * 4 = 24
    // therefore, n = 24/4 = 6

    // for FreqOfMostFreq
    vector<int> nums(arr, arr + n); // array -> vector
    int k = 5;                      // define k

    freqOfMostFreq(nums, k); // function call
    return 0;
}