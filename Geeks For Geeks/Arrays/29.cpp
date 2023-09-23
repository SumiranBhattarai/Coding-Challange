#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        unordered_map<int, int> aind;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            aind[a[i]] = i;
        }
        for (auto i : aind)
        {
            cout << i.first << ' ' << i.second << endl;
        }
        for (int j = 0; j < m; j++)
        {
            if (aind.find(b[j]) != aind.end())
            {
                count++;
                aind.erase(b[j]);
            }
        }
        if (count != 0)
        {
            return count;
        }
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
    int n, m;
    inputFile >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        inputFile >> a[i];

    for (int i = 0; i < m; i++)
        inputFile >> b[i];
    Solution ob;
    outputFile << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
