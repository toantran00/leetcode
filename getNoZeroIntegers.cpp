#include "stdcpp.h"
using namespace std;\
bool checkNum(int n)
{
    string s = to_string(n);
    int size = s.size();
    for(int i = 0 ;i<size;i++)
    {
        if(s[i] == '0') return false;
    }
    return true;
}
vector<int> getNoZeroIntegers(int n) {
    for(int i=1 ;i<n;i++)
    {
        int b = n - i;
        if(checkNum(i) && checkNum(b))
        {
            return {i,b};
        }
    }
}
