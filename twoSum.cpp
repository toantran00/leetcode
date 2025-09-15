#include "stdcpp.h"
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            int it = target - nums[i];
            if(map.count(it))
            {
                return {map[it],i};
            }
            map[nums[i]]=i;
        } 
        return {};       
}
int main()
{
    vector<int> v = {2,4,6};
    vector<int> ans = twoSum(v,6);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }


}
