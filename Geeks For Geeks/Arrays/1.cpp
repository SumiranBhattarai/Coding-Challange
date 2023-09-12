#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    void sort012(int arr[], int n)
    {
        // code here
        int low = 0, mid = 0;
        int high = n - 1;
        while (mid <= high)
        {
            switch (arr[mid])
            {
            case 0:
                swap(arr[mid], arr[low]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[high], arr[mid]);
                high--;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution obj;
    int arr[] = {1, 2, 0, 2, 1};
    obj.sort012(arr, 5);

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}