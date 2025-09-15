#include "stdcpp.h"
using namespace std;
long long zeroFilledSubarray(vector<int>& nums) {
    int n = nums.size();
    int dem = 0 ;
    bool check = false;
    long long ans = 0;
    for(int i = 0 ;i < n ;i++)
    {
        if(nums[i]==0)
        {
            dem+=1;
        }
        if(nums[i]!=0 && dem!=0 || (i == n-1 && dem!=0 ))
        {
            check = false;
            ans += dem*(dem+1)/2;
            dem = 0;
        }
        else continue;
    }        
    return ans;
}
int main()
{
    vector<int> nums = {0,0,0,2,0,0};
    long long ans = zeroFilledSubarray(nums);
    cout<<ans;
}