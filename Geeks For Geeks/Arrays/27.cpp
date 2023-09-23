#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            if (mp[arr[i]])
            {
                mp[arr[i]]++;
            }
            else
            {
                mp[arr[i]] = 0;
            }
        }
        for (auto i : mp)
        {
            arr[i.first - 1] = i.second + 1;
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

    int N, P;
    // size of array
    inputFile >> N;

    vector<int> arr(N);

    // adding elements to the vector
    for (int i = 0; i < N; i++)
    {
        inputFile >> arr[i];
    }
    inputFile >> P;
    Solution ob;
    // calling frequncycount() function
    ob.frequencyCount(arr, N, P);

    // printing array elements
    for (int i = 0; i < N; i++)
        outputFile << arr[i] << " ";
    outputFile << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
