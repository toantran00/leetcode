#include "stdcpp.h"
using namespace std;
int longestSubarray(vector<int>& nums) {
    int n = nums.size();
    int l = 0 ,res = 0,zero = 0;
    for(int i = 0;i<n;i++)
    {
        if (nums[i]==0)
        {
            /* code */
            zero++;
        }
        while (zero>1)
        {
            /* code */
            if (nums[l]==0)
            {
                /* code */
                zero--;
            }
            l++;
            
        }
        res = max(res,i-l);   
    }
    return res;
}