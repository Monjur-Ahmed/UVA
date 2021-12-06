#include<bits/stdc++.h>
using namespace std;
int main()
{
    int result;
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==-1 && b==-1)break;
        int dif = b-a;
        if(dif<0)
        {
            dif=-1*dif;
        }

        if(dif>=50)
        {
           result=100-dif;
        }
        if(dif<50)
        {
            result=dif;
        }

     printf("%d\n",result);
    }

    return 0;
}
