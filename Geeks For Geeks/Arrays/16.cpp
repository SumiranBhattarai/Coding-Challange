#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
string isSubset(int a1[], int a2[], int n, int m)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        mp[a1[i]]++;
    }
    for (int j = 0; j < m; j++)
    {
        if (mp[a2[j]])
        {
            count++;
            mp[a2[j]]--; // decrement element if already found
        }
    }
    if (count == m)
    {
        return "Yes";
    }
    else
        return "No";
}
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    // 7 5
    // 8 4 5 3 1 7 9
    // 5 1 3 7 9
    int a1[] = {8, 4, 5, 3, 1, 7, 9};
    int a2[] = {5, 1, 3, 7, 9};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);
    cout << isSubset(a1, a2, 7, 5);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}