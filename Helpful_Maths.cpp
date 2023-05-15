#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;
    int n = s.size();

    int arr[n], counter=0;

    for(int i=0; i<n; i=i+2)
    {
        int converter;
        char c;

        c = s[i];
        converter = int(c)-48;
        arr[counter++] = converter;
    }

    sort(arr, arr+counter);

    for(int i=0; i<counter; i++)
    {
        cout << arr[i];
        if(i == counter-1)
        {
            break;
        }
        cout << "+";

    }
    return 0;
}
