#include <bits/stdc++.h>
#define ll long long
using namespace std;
using namespace chrono;
class Solution
{
public:
    // Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N)
    {
        // code here
        bool flag = true;
        if (A.size() == B.size())
        {
            sort(A.begin(), A.end());
            sort(B.begin(), B.end());
            for (int i = 0; i < N; i++)
            {
                if (A[i] != B[i])
                {
                    flag = false;
                }
            }
        }
        else
            return false;
        return flag;
    }
    bool check_hash(vector<ll> A, vector<ll> B, int N)
    {
        map<int, int> mp;
        bool flag = true;
        for (int i = 0; i < N; i++)
        {
            mp[A[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            if (mp[B[i]])
            {
                mp[B[i]]--;
            }
            else
            {
                flag = false;
            }
        }
        return flag;
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
    vector<ll> arr(n, 0), brr(n, 0);
    for (ll i = 0; i < n; i++)
        inputFile >> arr[i];
    for (ll i = 0; i < n; i++)
        inputFile >> brr[i];
    Solution ob;
    outputFile << ob.check_hash(arr, brr, n) << "\n";
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
