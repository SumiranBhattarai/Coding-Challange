#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        // code here
        int distinct = 1;
        int j = 1;
        for (j = 1; j < n; j++)
        {
            if (a[j] != a[j - 1])
            {
                a[distinct] = a[j];
                distinct++;
            }
        }
        return distinct;
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

    int N;
    inputFile >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        inputFile >> a[i];
    }
    Solution ob;
    int n = ob.remove_duplicate(a, N);
    outputFile << n << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
