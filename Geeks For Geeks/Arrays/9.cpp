#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution_BRUTE
{
public:
    int count(int A, int B, int N)
    {
        int c = 0;
        // code here
        for (int i = A; i <= B; i++)
        {
            int count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    // cout << count;
                }
            }
            if (count == N)
            {
                c++;
            }
        }
        return c;
    }
};

class Solution
{
public:
    int count(int A, int B, int N)
    {
        int c = 0;
        // code here
        for (int i = A; i <= B; i++)
        {
            int count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    // cout << count;
                }
            }
            if (count == N)
            {
                c++;
            }
        }
        return c;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution ob;
    cout << ob.count(1, 7, 2);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}