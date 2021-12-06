#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0) break;
    long long int people[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&people[i]);
    }
    sort(people,people+n);
      for(int i=0;i<n;i++)
    {
    printf("%lld",people[i]);
    if(i==n-1) break;
    printf(" ");
    }
    printf("\n");
    }
    return 0;
}
