#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        // map<int, bool> mp;
        // Find max element
        int actual_sum = 0;
        for (int i = 0; i <= n; i++)
        {
            actual_sum = actual_sum + i;
        }
        // cout << actual_sum;
        int found_sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            found_sum += array[i];
        }

        //  Using For loop which key has the value 0
        int missing = actual_sum - found_sum;
        if (missing == 0)
        {
            return -1;
        }
        else
        {
            return missing;
        }
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {2, 3, 4, 1, 6, 7};
    Solution sol;
    cout << sol.missingNumber(arr, 7);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}