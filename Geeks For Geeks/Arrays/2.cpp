#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        vector<int> result;
        int start = 0;
        int currentSum = 0;
        if (s == 0)
        {
            result.push_back(-1);
            return result;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            currentSum += arr[i];
            while (s < currentSum)
            {
                currentSum -= arr[start];
                start++;
            }
            if (currentSum == s)
            {
                result.push_back(start + 1);
                result.push_back(i + 1);
                return result;
            }
        }
        result.push_back(-1);
        return result;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Solution ob;
    vector<int> res;
    res = ob.subarraySum(arr, arr.size(), 7);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}