#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long i,a,b; 
    string n; 
    getline(cin,n); 
    cin>>a>>b; 
    for(i=0; i<n.length(); i++)
    { 
        if(i<a or i>b) cout<<n[i]; 
    } 
}