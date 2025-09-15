#include "stdcpp.h"
using namespace std;
int maxSum(vector<int>& nums) {
    int it = *max_element(nums.begin(),nums.end());
    if(it<=0) return it;
    int n = nums.size();
    vector<bool> visited(101,false);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<=0) continue;
        if(!visited[nums[i]])
        {
            sum+=nums[i];
            visited[nums[i]] = true;
        }
    }
    return sum;
}