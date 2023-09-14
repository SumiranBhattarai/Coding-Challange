#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int max, secondmax;
        max = secondmax = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != max && secondmax < arr[i])
            {
                secondmax = arr[i];
            }
        }
        if (secondmax != 0)
        {
            return secondmax;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(int);
    Solution sol;
    cout << sol.print2largest(arr, n);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}