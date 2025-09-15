#include "stdcpp.h"
using namespace std;
bool hasDuplicate(vector<int>& nums) {
    if(nums.size()==0) return false;
    unordered_map<int,int> count;
    for(int num : nums)
    {
        count[num]++;
        if(count[num]>1) return true;
        else continue;
    }
    return false;
}
int main()
{
    vector<int> ans = {1,2,4,2,5};
    if(hasDuplicate(ans))
    {
        cout<<"ko co so trung";
    }
    else{
        cout<<"co trung";
    }
}