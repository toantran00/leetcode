#include "stdcpp.h"
using namespace std;
long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}
vector<int> replaceNonCoprimes(vector<int>& nums) {
    stack<int> st;
    for(int num : nums)
    {
        st.push(num);
        while (st.size()>1)
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            if(gcd(x,y)==1)
            {
                st.push(y);
                st.push(x);
                break;
            }
            st.pop();
            st.push(lcm(x,y));
        }
    }
    vector<int> result;
    while (!st.empty())
    {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
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