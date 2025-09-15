#include "stdcpp.h"
using namespace std;
int maximumCount(vector<int>& nums) {
    int n = nums.size();
    int soduong = 0 ;
    int soam = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0) soam++;
        else if (nums[i]>0) soduong++;
        else continue;
    }
    int maxd = max(soam,soduong);
    return maxd;
}
int main()
{

}