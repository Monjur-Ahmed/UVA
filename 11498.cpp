#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,x,y,a,b;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0) break;
         cin>>m>>n;
        while(t--)
        {
            cin>>x>>y;
            a=x-m;
            b=y-n;
            if(a>0 && b>0)
            {
                printf("NE\n");
            }
             if(a>0 && b<0)
            {
                printf("SE\n");
            }
             if(a<0 && b>0)
            {
                printf("NO\n");
            }
             if(a<0 && b<0)
            {
                printf("SO\n");
            }
            if((a==0)||(b==0))
            {
                printf("divisa\n");
            }
        }
    }

    return 0;
}
