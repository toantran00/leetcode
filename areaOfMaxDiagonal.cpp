#include "stdcpp.h"
using namespace std;
int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    double max_dientich = 0;
    double max_duongcheo = 0;
    for(int i = 0 ;i<dimensions.size();i++)
    {
        double current_duongcheo = sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
        double current_dientich = dimensions[i][0]*dimensions[i][1];
        cout<<current_duongcheo<<endl;
        if(current_duongcheo > max_duongcheo ||(current_duongcheo == max_duongcheo && current_dientich > max_dientich))
        {
            max_duongcheo = current_duongcheo;
            max_dientich = current_dientich;
        }
        else continue;
    }
    return max_dientich;
}
int main()
{
    vector<vector<int>> dimensions = {
        {2,6},{5,1},{3,10},{8,4}
    };
    int ans = areaOfMaxDiagonal(dimensions);
    cout<< ans ;
}