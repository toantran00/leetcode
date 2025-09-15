#include "stdcpp.h"
using namespace std;
int totalFruit(vector<int>& fruits) {
    int n = fruits.size();
    int maxType = *max_element(fruits.begin(), fruits.end());
    vector<int> count(maxType + 1, 0); // đếm số lượng từng loại trong window

    int left = 0, result = 0, distinct = 0;

    for (int right = 0; right < n; right++) {
        if (count[fruits[right]] == 0) distinct++;
        count[fruits[right]]++;

        // Nếu có hơn 2 loại trái cây → thu hẹp cửa sổ
        while (distinct > 2) {
            count[fruits[left]]--;
            if (count[fruits[left]] == 0) distinct--;
            left++;
        }

        // Cập nhật kết quả
        result = max(result, right - left + 1);
    }
    return result;
}
int main()
{
    vector<int> fruits = {1,2,1};
    int ans = totalFruit(fruits);
    cout<<ans;
}