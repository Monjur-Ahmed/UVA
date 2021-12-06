#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int num[10];
    while(scanf("%d",&t)==1)
    {
    printf("Lumberjacks:\n");
    while(t--)
    {
        int ascending=1,descending=1;
        for(int i=0;i<10;i++)
        {
            cin>>num[i];
        }
        for(int i=0;i<10;i++)
        {
            for(int j=i+1;j<10;j++)
            {
                if(num[i]<num[j])
                {
                    ascending++;
                    j=9;
                }
                   if(num[i]>num[j])
                {
                    descending++;
                    j=9;
                }
            }

        }

        if((ascending==10)||(descending==10))
        {
            printf("Ordered\n");
	    }

        if((descending!=10)&&(ascending!=10))
        {
           printf("Unordered\n");
        }
    }
    }
    return 0;
}
