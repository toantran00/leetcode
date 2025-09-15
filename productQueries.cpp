#include "stdcpp.h"
using namespace std;
vector<int> changeDigit(int n)
{
    vector<int> ans;
    int pow2 = 1; 
    while (n != 0) {
        int c = n % 2;
        if (c == 1) ans.push_back(pow2); 
        n /= 2;
        pow2 *= 2; 
    }
    sort(ans.begin(), ans.end());
    return ans;
}
vector<int> productQueries(int n, vector<vector<int>>& queries) {
    vector<int> changes = changeDigit(n);
    vector<int> result;
    for(const auto &pair : queries)
    {
        int i = pair[0];
        int j = pair[1];
        int ans = 1;
        bool check = true;
        for(int k=i;k<=j;k++)
        {
            if(k>=0 && k<changes.size()) ans*=changes[k];
            else
            {
                break;
                check = false;
            }
        }
        if(check) result.push_back(ans);
        else continue;
    }
    return result;

}
int main()
{
    vector<vector<int>> queries = {{0,0}};
   vector<int> result = productQueries(2,queries);
   for(int x : result)
   {
    cout<<x<<" ";
   }

}