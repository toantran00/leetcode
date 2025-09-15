#include "stdcpp.h"
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>> result;
    for(int i=0;i<n-3;i++)
    {
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1;j<n-2;j++)
        {
            if(j>i+1 && nums[j] == nums[j-1]) continue;
            int l = j+1;
            int k =n -1;
            while (k>l)
            {
                long long sum =(long long) nums[i]+nums[j]+nums[l]+nums[k];
                if( sum ==  target)
                {
                    result.push_back({nums[i],nums[j],nums[l],nums[k]});
                    while(k>l && nums[k] == nums[k-1]) k--;
                    while(l<k && nums[l] == nums[l+1]) l++;
                    k--;
                    l++; 
                }
                else
                {
                    if(sum>target) k--;
                    else l++;
                }
            }
        }
    }
    return result;
}
int main()
{

}
