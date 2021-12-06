#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,n,t,sum;
    cin>>t;
    while( t--)
    {
    cin>>n;
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    sort(num,num+n);
    sum=(num[n-1]-num[0])*2;
    printf("%d\n",sum);
    }
     return 0;
    }
