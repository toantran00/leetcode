#include "stdcpp.h"
using namespace std;
int findLHS(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int longgest = 0;
    int j = 0;
    for (int i = 0; i<n;i++)
    {
        while (nums[i] - nums[j] >1)
        {
            j++;
        }
        if(nums[i] - nums[j] ==1)
        {
            longgest =  max(longgest,i-j+1);
        }
        
    }
    return longgest;
    
    
}
int main()
{
    vector<int> v = {1,2,2,1};
    int result = findLHS(v);
    cout<<result<<endl;
}