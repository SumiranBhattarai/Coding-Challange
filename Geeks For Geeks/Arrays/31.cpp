#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // Your code here
        // return vector with correct order of elements
        set<int> res;
        for (int i = 0; i < n; i++)
        {
            res.insert(arr1[i]);
        }
        for (int j = 0; j < n; j++)
        {
            res.insert(arr2[j]);
        }
        vector<int> r(res.begin(), res.end());
        return r;
    }
    vector<int> findUnion2(int arr1[], int arr2[], int n, int m)
    {
        vector<int> res;
        int i = 0,
            j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] == arr2[j])
            {
                res.push_back(arr1[i]);
                i++;
                j++;
            }
            else if (arr1[i] > arr1[j])
            {
                res.push_back(arr2[j]);
                j++;
            }
            else if (arr1[i] < arr2[j])
            {
                res.push_back(arr1[i]);
                i++;
            }
        }
        while (i < n)
        {
            res.push_back(arr1[i]);
            i++;
        }
        while (j < m)
        {
            res.push_back(arr2[j]);
            j++;
        }
        return res;
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

    int N, M;
    inputFile >> N >> M;

    int arr1[N];
    int arr2[M];

    for (int i = 0; i < N; i++)
    {
        inputFile >> arr1[i];
    }

    for (int i = 0; i < M; i++)
    {
        inputFile >> arr2[i];
    }
    Solution ob;
    vector<int> ans = ob.findUnion2(arr1, arr2, N, M);
    for (int i : ans)
        outputFile << i << ' ';
    outputFile << endl;

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
