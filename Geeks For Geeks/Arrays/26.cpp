#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    // Program for zig-zag conversion of array
    void convertToWave(int n, vector<int> &arr)
    {
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (flag) // > relation
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            flag = !flag;
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
    int n;
    inputFile >> n;   // input size of array
    vector<int> a(n); // declare vector of size n
    for (int i = 0; i < n; i++)
        inputFile >> a[i]; // input elements of array
    sort(a.begin(), a.end());
    Solution ob;
    ob.convertToWave(n, a);

    for (int i = 0; i < n; i++)
        outputFile << a[i] << " "; // print array

    outputFile << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
