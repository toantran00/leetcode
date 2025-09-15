#include "stdcpp.h"
using namespace std;
const int MOD = 1e9+7;
int numberOfWays(int n, int x)
{
    vector<int> power;
    for(int i = 1 ; ; i++)
    {
        long long val =1;
        for(int j=0;j<x;j++) val*=i;
        if(val>n) break;
        power.push_back((int)val);
    }
    vector<int> dp(n+1,0);
    dp[0]=1;
     for (int val : power) {
        for (int sum = n; sum >= val; sum--) {
            dp[sum] = (dp[sum] + dp[sum - val]) % MOD;
        }
    }

    return dp[n];
}
 int change(int amount, vector<int>& coins) {
    vector<int> dp(amount+1,0);
    dp[0]=1;
    for(int value : coins)
    {
        for(int nums = value ;nums<=amount;nums++)
        {
            dp[nums]+=(dp[amount-value])%MOD;
        }
    }
    return dp[amount];
    }
int main()
{

}