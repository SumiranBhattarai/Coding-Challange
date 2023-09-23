#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    bool arraySortedOrNot(int arr[], int n)
    {
        // code here
        for (int i = 0; i < n - 1; i++)
        {
            if ((arr[i + 1] < arr[i]))
            {
                return false;
            }
        }
        return true;
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
    inputFile >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        inputFile >> arr[i];
    }
    Solution ob;
    bool ans = ob.arraySortedOrNot(arr, n);
    outputFile << ans << "\n";
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
