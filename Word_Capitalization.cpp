#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    cin>>s;

    c = s[0];
    char upper = toupper(c);
    s[0] = upper;
    cout << s;
}
