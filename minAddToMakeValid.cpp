#include "stdcpp.h"
using namespace std;
int minAddToMakeValid(string s)
{
    int closed_need = 0;
    int open_need = 0;
    for(char c:s)
    {
        if(c == '(')
        {
            closed_need++;
        }
        else
        {
            if(closed_need>0) closed_need--;
            else
            {
                open_need ++;
            }
        }
    }
    return open_need+closed_need;
}
int main()
{
    string s;
    cin>>s;
    int resolve = minAddToMakeValid(s);
    cout<<resolve;
}