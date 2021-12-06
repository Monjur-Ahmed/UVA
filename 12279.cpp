#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0)break;
        int treat=0;
        int num[t];
        for(int i=0;i<t;i++)
        {
            cin>>num[i];
        }
        for(int i=0;i<t;i++)
        {
            if(num[i]==0)
            {
                treat++;
            }
        }
        printf("Case %d: %d\n",j++,(t-treat)-treat);
    }
    return 0;
}
