#include "stdcpp.h"
using namespace std;
 vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right =numbers.size()-1;
        while (left<right)
        {
           int ans = numbers[left]+numbers[right];
           if(ans == target) return {left+1,right+1};
           else
           {
            if(ans > target ) right=right - 1;
            else left = left + 1;
           }
        }
        return {};
        
}
int main()
{
    vector<int> v = {2,7,11,15};
    vector<int> ans = twoSum(v,9);
    for (auto x:ans)
    {
        cout<<x<<" ";
    }
}