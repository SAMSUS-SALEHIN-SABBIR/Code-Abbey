#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a[100000];
    //long long b[100];
    long long sum;
    long long t,i;
    cin >> t;
    for(i=1;i<=t;i++){
        sum=0;
       for(i=0;i<t;i++){
       cin >> a[i];
       sum = sum + a[i];
       }
    cout << sum << endl;
    //printf("%lld\n",sum);
        
    }
    return 0;
}
