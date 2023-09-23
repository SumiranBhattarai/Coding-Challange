#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    void pushZerosToEnd(int *arr, int n)
    {
        int point = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[point] = arr[i];
                point++;
            }
        }

        for (int i = point; i < n; i++)
        {
            arr[i] = 0;
        }
    }
};
int main()
{
    // TIME START
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();
    // Code

    int n, i;
    inputFile >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        inputFile >> arr[i];
    }
    Solution ob;
    ob.pushZerosToEnd(arr, n);
    for (i = 0; i < n; i++)
    {
        outputFile << arr[i] << " ";
    }
    outputFile << "\n";

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
