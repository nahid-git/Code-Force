#include <bits/stdc++.h>
using namespace std;

int main()
{
    int li, be, counter=0;
    cin>> li >> be;

    for(int i=1; i<=10; i++)
    {
        li = li*3;
        be = be*2;
        if(li>be)
        {
            counter++;
            break;
        }
        counter++;
    }
    cout<< counter;
}
