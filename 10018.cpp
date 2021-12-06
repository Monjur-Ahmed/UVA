#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,rem;
    long long int num,rev,temp,sum;
    cin>>t;
    while(t--)
    {
        cin>>num;
        temp=num;
        rev=0;
        int i=0;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        sum=num+rev;
        temp=sum;
        rev=0;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        i++;
       if(sum==rev)
       {
           printf("%d %lld\n",i,rev);
       }

    while(sum!=rev)
    {
        temp=sum;
        rev=0;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        sum=sum+rev;
        temp=sum;
        rev=0;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        i++;
       if(sum==rev)
       {
           printf("%d %lld\n",i,rev);
       }

    }
    }
    return 0;
}
