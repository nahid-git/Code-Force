#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a, b, c, counter=0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;

        if((a==1 && b==1 && c==1)||(a==0 && b==1 && c==1)||(a==1 && b==1 && c==0)||(a==1 && b==0 && c==1))
        {
            counter++;
        }
    }

    cout << counter;
    return 0;
}
