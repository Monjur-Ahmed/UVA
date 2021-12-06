#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,n,t,sum=0,dist;
    cin>>t;
  while(t--)
    {
    cin>>n;
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    sort(num,num+n);
    for(i=0;i<n-1;i++)
    {
        sum+=num[i+1]-num[i];

    }
    dist=sum*2;
    printf("%d\n",dist);
    }

    return 0;
    }
