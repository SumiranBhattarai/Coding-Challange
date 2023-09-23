#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    int findKRotation(int arr[], int n)
    {
        // code here
        int first = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                return i + 1;
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
    int a[n];
    for (i = 0; i < n; i++)
    {
        inputFile >> a[i];
    }
    Solution ob;
    auto ans = ob.findKRotation(a, n);
    outputFile << ans << "\n";

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
