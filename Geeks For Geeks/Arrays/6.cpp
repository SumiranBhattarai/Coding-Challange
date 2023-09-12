#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        vector<int> dup(n, 0);
        vector<int> res;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                flag++;
            }
            else
            {
                dup[arr[i] - 1]++;
            }
        }

        if (flag > 1)
        {
            res.push_back(0);
        }

        for (int i = 0; i < n; i++)
        {
            if (dup[i] > 1)
            {
                res.push_back(i + 1);
            }
        }

        if (res.empty())
        {
            res.push_back(-1);
        }

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
    int arr[] = {0, 5, 4, 3, 0, 2, 0};
    vector<int> res;
    res = sol.duplicates(arr, sizeof(arr) / sizeof(int));
    for (auto it : res)
    {
        cout << it << endl;
    }
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}