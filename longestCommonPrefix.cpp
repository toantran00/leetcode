#include "stdcpp.h"
using namespace std;
string longestCommonPrefix(vector<string> &ans)
{
    if(ans.size()==0) return "";
    string temp = ans[0];
    for(int i=1;i<ans.size();i++)
    {
        int j = 0;
        while(j<temp.size() && j< ans[i].size() && temp[j] == ans[i][j])
        {
            j++;
        }
        temp = temp.substr(0,j);
        if(temp.empty()) return "";
    }
    return temp;
}
int main()
{
    vector<string> ans = {"flower", "flow", "flight"};
    string resolve = longestCommonPrefix(ans);
    cout<<resolve; 
}