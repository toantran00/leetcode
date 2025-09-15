#include "stdcpp.h"
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int closetSum = nums[0]+nums[1]+nums[2];
    int minDiff =abs(target - closetSum);
    for(int i=0;i<n-2;i++)
    {
        if(i>0 && nums[i] == nums[i-1]) continue;
        int left = i+1;
        int right = n-1;
        while (left<right)
        {
            /* code */
            int sum = nums[i]+nums[left]+nums[right];
            int currentDiff = abs(target - sum);
            if(currentDiff<minDiff)
            {
                minDiff = currentDiff;
                closetSum = sum;
            }
            if(sum == target)
            {
                return sum;
            }
            else
            {
                if(sum>target) right --;
                else left++;
            }
        }
    }
    return closetSum;
}
int main()
{

}