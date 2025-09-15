#include "stdcpp.h"
using namespace std;
bool checkVowels(char s)
{
    if(s=='u' || s == 'e' || s=='o' || s == 'a' || s == 'i')
    {
        return true;
    }
    return false;
} 
int maxFreqSum(string s) {
    int maxvowels = 0;
    int consonants = 0;
    map<char,int> result;
    for(char c : s)
    {
      result[c]++;
    }
    for(const auto& pair:result)
    {
        if(checkVowels(pair.first))
        {
            maxvowels =  max(maxvowels,pair.second);
        }
        else
        {
            consonants = max(consonants,pair.second);
        }
    }
    return maxvowels+consonants;
}