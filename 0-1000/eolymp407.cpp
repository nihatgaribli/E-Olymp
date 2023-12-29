#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k , n ;
    char t ;
    cin >> k ;
    char str[3] ={'G','C','V'};
    while(k)
    {
        cin >> n;
        while(n)
        {
            { t = str[3]; str[3] = str[2]; str[2] = t; }
            { t = str[2]; str[2] = str[1]; str[1] = t; }
            n-=1;
        }
        cout << str ;
        k-=1;
    }
return 0 ;
}