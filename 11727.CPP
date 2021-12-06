#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    int emp[3];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>emp[i];
        }
        sort(emp,emp+3);
        printf("Case %d: %d\n",i++,emp[1]);
    }
    return 0;
}
