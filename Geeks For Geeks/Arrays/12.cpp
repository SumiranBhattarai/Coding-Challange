#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
    int getPairsCount2(int arr[], int n, int k)
    {
        int count = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            int val = k - arr[i]; // 6-1  =  5
            if (map[val])         // if 5 exist in map
            {
                count = count + map[val]; // increment count with the value that is in the map
            }
            map[arr[i]]++; // count number of times an element is there
        }
        return count;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    int arr[] = {1, 5, 7, 1};
    Solution sol;
    cout << sol.getPairsCount2(arr, sizeof(arr) / sizeof(int), 6);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}