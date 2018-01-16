#include <iostream>
#include<cmath>
using namespace std;
     
     
int main() 
{
        // your code goes here
        float  arr[100];
        int n,i;
        double celcius,ans;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            //arr[i]=arr[i]-1;
            celcius =(arr[i]-32)*5/9;
            ans = round(celcius);
            cout << ans << " ";
            //celcius = 5/9*(arr[i]-32);
            //cout << celcius << " ";
        }
        return 0;
    }
