#include "stdcpp.h"
using namespace std; 
int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int n = fruits.size();
    vector<bool> visited (1001,false);
    int ans = 0;
    for(int i=0 ; i<n ;i++)
    {
        int length = fruits[i];
        int j = 0;
        for (auto x:baskets)
        {
            if(length <= x && visited[j]==false)
            {
                ans+=1;
                visited[j] =true; break;
              
            }
            else
            {
                j++;
                continue;
            }
             
        }
    }
    // for(int i = 0; i<n ;i++)
    // {
    //     if(visited[baskets[i]] == false)
    //     {
    //         ans+=1;
    //     }
    // }
    return ans;
}
int main()
{
    vector<int> fruits = {4,2,5};
    vector<int> baskets = {3,5,4};
    int result = numOfUnplacedFruits(fruits,baskets);
    cout<<result;
}