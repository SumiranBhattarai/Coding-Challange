#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    void rearrange2(int arr[], int n)
    {
        // code here
        bool flag;
        for (int i = 0; i < n - 1; i++)
        {
            if (flag)
            {
                if ((arr[i] > arr[i + 1]))
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            else
            {
                if ((arr[i] < arr[i + 1]))
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            flag = !flag;
        }
    }
    void rearrange(int arr[], int n)
    {
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }
        int i = 0;
        int j = 0;
        int k = 0;
        while (k < n)
        {
            if (i < pos.size())
            {
                arr[k] = pos[i];
                k++;
                i++;
            }
            if (j < neg.size())
            {
                arr[k] = neg[j];
                k++;
                j++;
            }
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

    int n, i;
    inputFile >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        inputFile >> arr[i];
    }
    Solution ob;
    ob.rearrange(arr, n);
    for (i = 0; i < n; i++)
    {
        outputFile << arr[i] << " ";
    }
    outputFile << "\n";

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}
