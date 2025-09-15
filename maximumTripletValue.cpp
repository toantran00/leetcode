#include "stdcpp.h"
using namespace std;
long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixMax(n), suffixMax(n);

        prefixMax[0] = nums[0];
        for (int i = 1; i < n; i++)
            prefixMax[i] = max(prefixMax[i-1], nums[i]);

        suffixMax[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--)
            suffixMax[i] = max(suffixMax[i+1], nums[i]);

        long long ans = 0;
        for (int j = 1; j < n-1; j++) {
            long long diff = (long long)prefixMax[j-1] - nums[j];
            long long candidate = diff * suffixMax[j+1];
            ans = max(ans, candidate);
        }
        return ans;
    }