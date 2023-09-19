#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    bool subArrayExists(int arr[], int n)
    {
        int sum = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum == 0 || mp.find(sum) != mp.end())
            {
                return true;
            }
            mp.emplace(sum, i);
        }
        return false;
    }
    bool subArrayExists_WITH_SET(int arr[], int n)
    {
        int sum = 0;
        unordered_set<int> mp;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum == 0 || mp.find(sum) != mp.end())
            {
                return true;
            }
            mp.insert(sum);
        }
        return false;
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
        inputFile >> arr[i];
    Solution obj;
    if (obj.subArrayExists_WITH_SET(arr, n))
        outputFile << "Yes\n";
    else
        outputFile << "No\n";
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
