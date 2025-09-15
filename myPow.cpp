#include "stdcpp.h"
using namespace std;
double myPow(double x, int n) {
    return std::pow(x,n);       
}
int main()
{
    double n = myPow(2,-2);
    cout<<n;
    return 0;
}