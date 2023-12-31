#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        int mindist = INT_MAX;
        int prev = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x || a[i] == y)
            {
                if (prev != -1 && a[prev] != a[i])
                {
                    mindist = min(mindist, i - prev);
                }
                prev = i;
            }
        }
        if (mindist != INT_MAX)
        {
            return mindist;
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

    int n;
    inputFile >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        inputFile >> a[i];
    int x, y;
    inputFile >> x >> y;
    Solution obj;
    outputFile << obj.minDist(a, n, x, y) << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
