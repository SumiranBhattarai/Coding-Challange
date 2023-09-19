#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n)
    {
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (flag == true && arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                flag = false;
            }
            else if (flag == true && arr[i] < arr[i + 1])
            {
                flag = false;
            }
            else if (flag == false && arr[i] > arr[i + 1])
            {
                flag = true;
            }
            else if (flag == false && arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                flag = true;
            }
        }
    }
};
bool isZigzag(int arr[], int n)
{
    int f = 1;

    for (int i = 1; i < n; i++)
    {
        if (f)
        {
            if (arr[i - 1] > arr[i])
                return 0;
        }
        else
        {
            if (arr[i - 1] < arr[i])
                return 0;
        }
        f = f ^ 1;
    }

    return 1;
}
int main()
{
    // TIME START
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();
    // Code

    int n;
    inputFile >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        inputFile >> arr[i];
    }
    Solution ob;
    ob.zigZag(arr, n);
    bool check = 1;
    check = isZigzag(arr, n);

    if (check)
        outputFile << "1\n";
    else
        outputFile << "0\n";

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
