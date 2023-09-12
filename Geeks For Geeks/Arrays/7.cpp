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
bool isPerfectNumber(int N)
{
    int sum = 0;

    // Calculate the sum of proper divisors
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }

    // Check if the sum of proper divisors is equal to N
    return sum == N;
}
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution obj;
    cout << obj.isPerfectNumber(6);
    // TIME END
    cout << endl
         << isPerfectNumber(28);
    cout << endl
         << isPerfectNumber(6);
    cout << endl
         << isPerfectNumber(5);
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "\nExecution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}