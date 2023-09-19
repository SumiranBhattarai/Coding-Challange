#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        int temp[n + m];
        int ind = 0;
        int unique = 0;
        for (int i = 0; i < n; i++)
            temp[ind++] = a[i];
        for (int j = 0; j < m; j++)
            temp[ind++] = b[j];

        sort(temp, temp + ind);

        for (int i = 1; i <= ind; i++)
        {
            if (temp[i] != temp[i - 1])
            {
                unique++;
            }
        }
        return unique;
    }
    int doUnion2(int a[], int n, int b[], int m) // TIME LIMIT EXCEEDS
    {
        int temp[n + m];
        int ind = 0;
        int unique = 0;
        set<int> set_a(a, a + n);
        set<int> set_b(b, b + m);
        set<int> set_c;
        set_c.insert(set_a.begin(), set_a.end());
        set_c.insert(set_b.begin(), set_b.end());
        unique = set_c.size();
        return unique;
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
    int a[n];
    for (int i = 0; i < n; i++)
        inputFile >> a[i];
    int b[m];
    for (int i = 0; i < m; i++)
        inputFile >> b[i];
    Solution sol;
    outputFile << sol.doUnion(a, n, b, m) << endl;
    outputFile << sol.doUnion2(a, n, b, m);

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
