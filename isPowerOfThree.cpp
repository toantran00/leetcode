#include "stdcpp.h"
using namespace std;
bool isPowerOfThree(int n) {
    if(n<=0) return false;
    for(int i=0 ;pow(3,i)<=n ; i++)
    {
        long long power = pow(3,i);
        if(power == n) return true;
    }        
    return false;
}