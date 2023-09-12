#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        // Code here

        int currentSum = 0;
        vector<int> res;
        // Find the sum
        for (int i = 0; i < n; i++)
        {
            currentSum += a[i];
        }

        // Find Sum of All Array to right
        for (int i = 0; i < n; i++)
        {
            currentSum -= a[i];
            if (a[i] > currentSum)
            {
                res.push_back(a[i]);
            }
        }

        // if num>sum then leader
        // add to vector
        return res;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution sol;
    int arr[] = {63, 70, 80, 33, 33, 47, 20};
    int n = sizeof(arr) / sizeof(int);

    vector<int> res = sol.leaders(arr, n);

    for (auto it : res)
    {
        cout << it << endl;
    }

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}