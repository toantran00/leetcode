#include "stdcpp.h"
using namespace std;
 int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int n = fruits.size();
    auto maxBasket = *max_element(baskets.begin(),baskets.end());
   for (auto it = fruits.begin(); it != fruits.end(); ) {
    if (*it > maxBasket)
        it = fruits.erase(it);
    else
        ++it;
    }
    for(auto fruit : fruits)
    {
        int j=0;
        for (auto x:baskets)
        {
            if(fruit <= x )
            {
                baskets.erase(baskets.begin()+j);
                break;
            }
            j++;
        }
    }
   return baskets.size();
}
int main()
{

}