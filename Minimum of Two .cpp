#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    long long a,b,t,i;
    cin >> t;
    for(i=1;i<=t;i++){
    cin >> a >> b;
    if(a>b) cout << b << " ";
    else cout << a << " ";
    }
}
