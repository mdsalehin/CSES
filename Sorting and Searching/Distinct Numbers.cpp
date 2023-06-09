#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    long long n;
    cin>>n;
    long long arra[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    sort(arra,arra+n);
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arra[i]!=arra[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
