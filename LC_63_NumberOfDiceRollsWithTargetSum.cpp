#include <bits/stdc++.h>
using namespace std;

// gives TLE for large inputs, we'll use DP to optimize it in future
int numRollsToTarget(int n, int k, int target)
{
    // base cases
    if (target < 0)
        return 0;
    if (n == 0 && target != 0)
        return 0;
    if (n == 0 && target == 0)
        return 1;

    /// calculation
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans = ans + numRollsToTarget(n - 1, k, target - i);
    }
    return ans;
}

int main()
{
    return 0;
}