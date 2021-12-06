#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N,i=1;
    cin>>t;
    while(t--)
    {
        int low=0,high=0;
        cin>>N;
           int height[N];
           for(int i=0;i<N;i++)
           {
               cin>>height[i];
           }
           for(int i=0;i<N;i++)
           {
               for(int j=i+1;j<N;j++)
               {
                   if(height[i]>height[j])
                   {
                       low++;
                   }
                    if(height[i]<height[j])
                   {
                       high++;
                   }
                   break;
               }
           }
           printf("Case %d: %d %d\n",i++,high,low);
    }
    return 0;
}
