#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        // code here
        int distinct = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int val = a[i];
            int j = i;
            while (a[j] == val && j != n)
            {
                a[i] = a[j];
                j++;
            }
        }
        //  for (int i = 0; i < n; i++)
        //    cout << a[i] << endl;
        if (distinct == 0)
            return a[0];
        return distinct;
    }
};
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution sol;
    int arr[] = {2, 2, 2, 2, 2};
    cout << sol.remove_duplicate(arr, sizeof(arr) / sizeof(int));
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}