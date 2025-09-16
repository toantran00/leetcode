#include "stdcpp.h"
using namespace std;
long long lcm(long long a,long long b)
{
    return a/gcd(a,b)*b;
}
vector<int> replaceNonCoprimes(vector<int>& nums) {
    vector<int> result;
    for(int num : nums)
    {
        result.push_back(num);
        while (result.size()>1)
        {
            int x = result.back();
            result.pop_back();
            int y = result.back();
            result.pop_back();
            if(gcd(x,y) == 1)
            {
                result.push_back(y);
                result.push_back(x);
                break;
            }
            long long lcm_x_y = lcm(x,y);
            result.push_back(lcm_x_y);
        }
    }
    return result;
    
}
int main() {
    vector<int> nums = {6, 4, 3, 2, 7, 6, 2};  // Ví dụ input
    vector<int> result = replaceNonCoprimes(nums);
    
    // In kết quả
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}