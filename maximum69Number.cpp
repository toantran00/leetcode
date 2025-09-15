#include "stdcpp.h"
using namespace std;
int maximum69Number (int num) {
    if(num%9==0) return num;
    string convert = to_string(num);
    string result = "";
    int n = convert.size();
    bool check = false;
    for(int i = 0 ;i < n ;i++)
    {
        if(convert[i]=='9')
        {
            result.push_back('9');
        }
        else if(convert[i]!='9' && check == false)
        {
            result.push_back('9');
            check = true;
        }
        else
        {
            result.push_back(convert[i]);
        }
    }
    int ans = stoi(result);
    return ans;
}
int main()
{
    int n = 9999;
    int result = maximum69Number(n);
    cout<<result;
}