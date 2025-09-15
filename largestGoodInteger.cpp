#include "stdcpp.h"
using namespace std;
string largestGoodInteger(string num) {
    string result = "";
    string ans = "";
    ans.push_back(num[0]);
    int dem = 1;
    int n = num.size();
    int max = 0;
    for(int i=1;i<n;i++)
    {
        if(num[i]!=num[i-1])
        {
            dem = 1;
            ans="";
            ans.push_back(num[i]);
            continue;

        }
        else
        {
            dem+=1;
            ans.push_back(num[i]);
            if(dem == 3)
            {
                if(ans == "000" && result.empty())
                {
                    result =  ans;
                    ans = "";
                    dem = 0;
                }
                else if(stoi(ans)>max)
                {
                    result =  ans;
                    max = stoi(ans);
                    ans = "";
                    dem = 0;
                }
            }
        }
    }
    return result;
}
int main()
{
    string num = "7777";
    string ans = largestGoodInteger(num);
    cout<<ans;
}