#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        int ind = 0;
        int val = 0;
        int minim = n;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == x || a[i] == y) && (val == 0))
            {
                val = a[i];
                ind = i;
            }
            else if ((a[i] == x || a[i] == y) && (val != a[i]))
            {
                minim = min(minim, ind + 1);
                val = a[i];
                ind = 0;
            }
            else
            {
                ind++;
            }
        }
        if (minim != 0)
            return minim;
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
