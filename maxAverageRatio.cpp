#include "stdcpp.h"
using namespace std;
double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    auto gain = [](int p, int t) {
        return (double)(p + 1) / (t + 1) - (double)p / t;
    };
    using P = pair<int,int>;
    auto cmp = [&](const P& a, const P& b) {
        return gain(a.first, a.second) < gain(b.first, b.second);
    };
    priority_queue<P, vector<P>, decltype(cmp)> pq(cmp);
    for (auto &c : classes) pq.push({c[0], c[1]});
    while (extraStudents--) {
        auto [p, t] = pq.top(); pq.pop();
        ++p; ++t;
        pq.push({p, t});
    }
    double sum = 0;
    while (!pq.empty()) {
        auto [p, t] = pq.top(); pq.pop();
        sum += (double)p / t;
    }
    return sum / classes.size(); 
    
}
int main()
{
    vector<vector<int>> classes = {{1,2},{3,4}};
    cout<<classes[0][0]<<" "<<classes[0][1];
}