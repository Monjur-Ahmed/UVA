#include<bits/stdc++.h>
using namespace std;
int sum(int n);
int main()
{
    long long int n;
    int ans;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0) break;
        ans=sum(n);
        printf("%d\n",ans);
}
    }
int sum(int n)
{
     static int r;
    r=r+n%10;
    sum(n/10);
    if(r<10)
        return r;
}

