#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    while(scanf("%lf",&n)!=EOF)
    {
        int temp,rem=0,sum=0;
        if(n==0)break;
        temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            temp/=10;
        }
        if(sum>9)
        {
            temp=sum;
            sum=0,rem=0;
            while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            temp/=10;
        }
        }
        if(sum>9)
        {
            temp=sum;
            sum=0,rem=0;
            while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            temp/=10;
        }

        }
        printf("%d\n",sum);
    }
    return 0;
}
