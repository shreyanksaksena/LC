class Solution {
public:

    int recursion(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n]; // if i already have then why calculate it again
    }
    // n>=3
    return dp[n] = recursion(n - 1, dp) + recursion(n - 2, dp) + recursion(n - 3, dp);
}

    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return recursion(n,dp);
    }
};