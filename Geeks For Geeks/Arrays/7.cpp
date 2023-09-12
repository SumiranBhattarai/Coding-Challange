#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    int isPerfectNumber(long long N)
    {
        // Check for edge case where N is less than 2
        if (N <= 1)
            return -1;

        long long sum = 1; // Start with 1 because 1 is always a proper divisor
        long long sqrtN = sqrt(N);

        for (int i = 2; i <= sqrtN; i++)
        {
            if (N % i == 0)
            {
                sum += i;
                if (i != N / i) // Avoid counting the same divisor twice
                    sum += N / i;
            }
        }

        if (sum == N)
            return 1;
        else
            return -1;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution obj;
    cout << obj.isPerfectNumber(6);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}