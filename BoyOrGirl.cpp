#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    char arr[s.size()];

    int counter = 1;
    arr[0] = s[0];

    for(int i=1; i<s.size(); i++)
    {
        if(s[i] != s[i-1])
        {
            arr[counter++] = s[i];
        }
    }

    if(counter%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout <<  "IGNORE HIM!" ;
    }
    return 0;
}
