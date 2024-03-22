#include <iostream>
using namespace std;

bool checkRecord(string s)
{
    int countL = 0;
    int countA = 0;
    int maxL = 0;

    for (int i = 0; i<s.size(); i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }

        if (s[i] == 'L')
        {
            countL++;
        }
        else
        {
            countL = 0;
        }

        if (maxL < countL)
            maxL = countL;

        if (maxL >= 3 || countA >= 2)
            return false;
    }

    return true;
}

int main(){
    string s = "PALLL";
    
    bool ans = checkRecord(s);
    cout<<ans;

    return 0;
}