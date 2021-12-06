#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,c;
    cin>>t;
    while(t--)
    {
   long long int value=0;
    cin>>r>>c;
    int box[r][c];
    for( int i=3;i<=c;i=i+3)
    {

        for(int j=3;j<=r;j=j+3)
        {
            value++;
        }
    }
    printf("%lld\n",value);
    }
    return 0;
}
