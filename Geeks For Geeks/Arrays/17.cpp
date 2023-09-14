#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool hasArrayTwoCandidates_NOT_WORKING(int arr[], int n, int x)
    {
        unordered_map<int, int> mp;
        int val;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            val = x - arr[i];
            if (mp.find(val) != mp.end() && mp[val] > 0)
            {
                return true;
            }
        }
        return false;
    }
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val = x - arr[i];
            if (mp.find(val) != mp.end())
            {
                return true;
            }
            mp[arr[i]] = 1;
        }
        return false;
    }
};

int main()
{
    int n = 5, x = 10;
    int arr[n] = {1, 2, 2, 5, 7};

    Solution solution;
    if (solution.hasArrayTwoCandidates_NOT_WORKING(arr, n, x))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}