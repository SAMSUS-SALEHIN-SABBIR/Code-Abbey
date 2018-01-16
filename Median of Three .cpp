#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t,i;
    int a,b,c;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> a >> b >> c;
        if((a<b && a>c) || (a>b && a<c)) 
        cout << a << " ";
        else if ((b>a && b<c) || (b<a && b>c)) 
        cout << b << " ";
        else if ((c<a && c>b) || (c>a && c<b)) 
        cout << c << " ";
        
    }
    return 0;
