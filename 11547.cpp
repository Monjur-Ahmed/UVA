#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,rem;
    long long int number,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        number=((((((n*567)/9)+7492)*235)/47)-498);
        temp=number;
       for(int i=1;i<=2;i++)
        {
            rem=temp%10;
            temp=temp/10;
        }
        if(rem<0)
        {
            rem*=-1;
        }

       printf("%d\n",rem);
    }
    return 0;
}

