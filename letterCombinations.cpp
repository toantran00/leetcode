#include "stdcpp.h"
using namespace std;

class Solution {
public:
unordered_map<char, string> mapping = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};
// digits=23
// digits="abc"
// def
vector<string> res;
string cur;
void recurs(string digits,int index)
{
    if(index ==  digits.size())
    {
        res.push_back(cur);
        return;
    }
    string chars = mapping[digits[index]];
    for(int i=0 ;i<chars.size();i++)
    {
        cur.push_back(chars[i]);
        recurs(digits,index+1);
        cur.pop_back();
    }
}

    vector<string> letterCombinations(string digits) {
    if(digits.empty()) return {};
    recurs(digits,0);
    return res;
};
};
