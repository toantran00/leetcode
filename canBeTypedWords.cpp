#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int canBeTypedWords(string text, string brokenLetters) {
    stringstream ss(text);
    string word;
    int count = 0;
    while(getline(ss,word,' '))
    {
        bool check = true;
        for(char c : brokenLetters)
        {
            if(word.find(c) != string::npos)
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            count++;
        }
    }
    return count;
}
int main()
{

}