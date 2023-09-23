#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        // code here
        map<int, int> mp;
        int first = n;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]])
            {
                first = min(first, mp[arr[i]]);
            }
            mp[arr[i]] = i + 1;
        }
        if (first != n)
            return first;
        return -1;
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

    for (int i = 0; i < n; ++i)
        inputFile >> arr[i];
    Solution ob;
    outputFile << ob.firstRepeated(arr, n) << "\n";
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
