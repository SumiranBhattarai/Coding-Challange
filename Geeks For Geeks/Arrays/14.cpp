#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(int arr[], int d, int n)
    {
        d = d % n;
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(i + d) % n];
            cout << temp[i] << endl;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
        //  for (int i = 0; i < n; i++)
        //   cout << arr[i] << endl;
        // code here
    }
    void rotateArr2(int arr[], int d, int n)
    {
        int temp[n];
        int k = 0;
        for (int i = d; i < n; i++)
        {
            temp[k] = arr[i];
            k++;
        }
        for (int i = 0; i < d; i++)
        {
            temp[k] = arr[i];
            k++;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << endl;
    }
    void rotateArr3(int arr[], int d, int n)
    {
        int temp[d];
        for (int i = 0; i < d; i++)
            temp[i] = arr[i];
        for (int i = d; i < n; i++)
        {
            arr[i - d] = arr[i];
        }
        for (int i = 0; i < d; i++)
        {
            arr[n - d + i] = temp[i];
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << endl;
    }
    void rotateArr4(int arr[], int d, int n)
    {
        int temp[d];
        for (int i = 0; i < d; i++)
        {
            temp[i] = arr[i];
        }

        /* shifting remaining elements of the array */
        int x = 0;
        for (int j = d; j < n; j++)
        {
            arr[x] = arr[j];
            x++;
        }

        /* storing back the D elements to the orignal array */
        x = 0;
        for (int k = n - d; k < n; k++)
        {
            arr[k] = temp[x];
            x++;
        }
    }
};
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    int arr[] = {25, 6, 20, 55, 69, 5, 50, 63, 61, 41, 87, 80, 2, 96, 77, 70, 12, 43, 31, 8, 64, 41, 68, 18, 95, 79, 52, 74, 1, 98, 3, 26, 3, 74, 32, 23, 79, 81, 37, 39, 21, 24, 18, 22, 71, 47, 44};
    // int arr[] = {1, 2, 3, 4, 5};
    Solution sol;
    sol.rotateArr4(arr, 47, 77);
    // sol.rotateArr(arr, 2, 5);
    //  TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}