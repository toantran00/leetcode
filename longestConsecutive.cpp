#include "stdcpp.h"
using namespace std;
int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;
    int n =  nums.size();
    int ans = 1;
    int longgest = INT_MIN;
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++)
    {
        if(nums[i] == nums[i-1]) continue;
        if(nums[i] - nums[i-1] ==1)
        {
            ans+=1;
            if(ans > longgest)
            {
                longgest = ans;
            }
        }
        else
        {
            ans = 1;
        }
    }
    return 0;
}
int main()
{
    vector<int> ans = {0,3,7,2,5,8,4,6,0,1};
    int result = longestConsecutive(ans);
    cout<<result;
}