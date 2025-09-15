#include "stdcpp.h"
using namespace std;
string intToRoman(int num) {
    pair<int, string> roman[] = {
    {1,    "I"},
    {5,    "V"},
    {10,   "X"},
    {50,   "L"},
    {100,  "C"},
    {500,  "D"},
    {1000, "M"}
    };
    string result = "";
    for(const auto &pair : roman)
    {
        while (num >= pair.first)
        {
            /* code */
            result +=  pair.second;
        }
        
    }
    return result;
    
}
int main()
{
    pair<int, string> roman[] = {
    {1,    "I"},
    {5,    "V"},
    {10,   "X"},
    {50,   "L"},
    {100,  "C"},
    {500,  "D"},
    {1000, "M"}
    };
}
