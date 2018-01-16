#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int a,b,c,t,n,i,sum=0;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin >> a >> b >> c;
        n=a*b+c;
        while (n!=0)
        {
        sum = sum + n % 10;
        n = n / 10;
        //cout << sum << " ";
        //res=res + sum;
        }
        cout << sum << " ";
        }
        //cout << sum << " ";
        
    return 0;
}
