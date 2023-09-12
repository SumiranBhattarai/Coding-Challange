#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Initialize a variable to store the sum of divisors
        long long sum = 0;

        // Iterate from 1 to N
        for (int i = 1; i <= N; i++)
        {
            // Calculate the contribution of i to the sum of divisors
            // (N / i) gives the number of times i is a divisor of N
            // Multiply this count by i to get the total contribution of i
            sum = sum + (N / i) * i;
        }

        // Return the sum of all divisors
        return sum;
    }
};

class Solution2
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Solution ob;
    cout << ob.sumOfDivisors(4);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}