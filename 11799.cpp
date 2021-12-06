#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int speed[n];
        for(int i=0;i<n;i++)
        {
            cin>>speed[i];
        }
        sort(speed,speed+n);
        printf("Case %d: %d\n",j++,speed[n-1]);
    }
    return 0;
}
