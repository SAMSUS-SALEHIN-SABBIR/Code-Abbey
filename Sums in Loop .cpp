#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a[100];
    long long b[100];
    long long sum;
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++){
       for(i=0;i<t;i++){
           sum=0;
    cin >> a[i] >> b[i];
    sum = a[i] + b[i];
    cout << sum << " ";
       }
    }
    return 0;
}
