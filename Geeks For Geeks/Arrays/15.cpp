#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        unordered_map<int, int> mp;
        int sum = 0;
        int maxlen = 0;
        // mp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (sum == 0)
                maxlen = i + 1;
            if (mp.find(sum) != mp.end())
            {
                maxlen = max(maxlen, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return maxlen;
    }
};
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution sol;
    vector<int> arr = {-1, 1, -1, 1};
    cout << sol.maxLen(arr, arr.size());
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}