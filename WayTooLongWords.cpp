#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        string s = arr[i];
        int counter = arr[i].size();

        if(counter >10)
        {
            cout << s[0] << counter-2 <<s[s.size()-1] << endl;
        }
        else
        {
            cout << s <<endl;
        }
    }
}
