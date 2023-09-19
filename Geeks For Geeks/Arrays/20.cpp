#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        for (int i = 0; i < n; i += k)
        {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while (left < right)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
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
    inputFile >> n;
    vector<long long> arr;
    int k;
    inputFile >> k;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        inputFile >> x;
        arr.push_back(x);
    }
    Solution ob;
    ob.reverseInGroups(arr, n, k);

    for (long long i = 0; i < n; i++)
    {
        outputFile << arr[i] << " ";
    }
    outputFile << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
