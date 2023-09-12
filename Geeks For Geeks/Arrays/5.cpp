#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int arr[], int n)
    {
        // Code here
        vector<int> res;
        int max_right = arr[n - 1];
        res.push_back(max_right);

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= max_right)
            {
                res.push_back(arr[i]);
                max_right = arr[i];
            }
        }

        reverse(res.begin(), res.end());
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