#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    string longestCommonPrefix(string arr[], int N)
    {
        sort(arr, arr + N);
        string temp = "";
        if (N == 1)
        {
            return arr[0];
        }
        int min_len = arr[0].size();
        for (int i = 0; i < N; i++)
        {
            if (arr[i].size() < min_len)
            {
                min_len = arr[i].size();
            }
        }
        for (int i = 0; i < min_len; i++)
        {
           // cout << "1: " << arr[0][i] << "    2: " << arr[N - 1][i] << endl;
            if (arr[0][i] == arr[N - 1][i])
            {
                temp = temp + arr[0][i];
            }
            else
            {
                break;
            }
        }
        if (temp != "")
            return temp;
        else
            return "-1";
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
    string arr[n];
    for (int i = 0; i < n; ++i)
        inputFile >> arr[i];

    Solution ob;
    outputFile << ob.longestCommonPrefix(arr, n) << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
