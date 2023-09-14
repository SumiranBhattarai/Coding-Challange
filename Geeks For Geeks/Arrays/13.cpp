#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    int peakElement(int arr[], int n)
    {
        if (n == 1)
            return 0;
        if (arr[0] > arr[1] && n >= 2)
            return 0;
        else if (arr[n - 1] > arr[n - 2])
            return n - 1;
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
                    return i;
            }
        }
        return 0;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution sol;
    int arr[] = {1, 2, 3};
    cout << sol.peakElement(arr, 3);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}