#include "stdcpp.h"
using namespace std;
int reverse(int x) {
    bool isNegative = x < 0;
    long long y;
    if (isNegative) {
        y = -(long long)x;
    } else {
        y = x;
    }
    string result = to_string(y);
    reverse(result.begin(), result.end());
    long long ans = 0;
    for (int i = 0; i < result.size(); i++) {
        ans = ans * 10 + (result[i] - '0');
    }

    if (ans > INT32_MAX) return 0;
        if(x<0) return (-1)*ans;
        return ans;
}
int main()
{
    int y = reverse(1534236469
);
    cout<<y;
    
}