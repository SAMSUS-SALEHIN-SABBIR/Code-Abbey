#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    long long a,b,c,t,i;
    cin >> t;
    for(i=1;i<=t;i++){
    cin >> a >> b >> c;
    if((a<b && a<c) && (b<c || c<b)) cout << a << " ";
    else if ((b<a && b<c) && (a<c || c<a)) cout << b << " ";
    else if ((c<a && c<b) && (a<b || b<a)) cout << c << " ";
    }
}
