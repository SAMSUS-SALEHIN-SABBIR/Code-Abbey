#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // your code goes here
    double a,b,t,i,ans;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> a >> b;
        ans=round(a/b);
        cout << ceil (ans) << " ";
        
    }
    return 0;
}
