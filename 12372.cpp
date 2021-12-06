#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t,L,W,H;
    int i=1;
    cin>>t;
    while(t--)
    {
       cin>>L>>W>>H;
       if((L<=20)&&(W<=20)&&(H<=20))
       {
           printf("Case %d: good\n",i++);
       }
       else{
           printf("Case %d: bad\n",i++);
       }
    }
    return 0;
}
