#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {
        int calc = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (n <= 1)
        {
            return a[0];
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                calc = calc + a[i - 1];

            sum = sum - a[i];

            sum - a[i];
            if (sum == calc)
            {
                return i + 1;
            }
        }
        return -1;
        // Your code here
    }
};
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution sol;
    long long arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(long long);
    cout << n;
    cout << sol.equilibriumPoint(arr, n);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}