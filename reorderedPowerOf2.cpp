#include "stdcpp.h"
using namespace std;
string sortedDigits(int n)
{
    string s = to_string(n);
    sort(s.begin(),s.end());
    return s;
}
bool reorderedPowerOf2(int n)
{
    unordered_set<string> powerOf2;
    for(int i=0;i<31;i++)
    {
        int power = 1<<i;
        powerOf2.insert(sortedDigits(power));
    }
    return powerOf2.count(sortedDigits(n));
}


int main()
{

}