#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
  while(scanf("%d",&t)!=EOF)
  {
      while(t--)
      {
          cin>>n;
          int sum=0;
          int sizer=n*3;
              long  int num[sizer];
              for(int i=0;i<sizer;i++)
              {
                   cin>>num[i];
              }
              for(int i=0;i<sizer;i=i+3)
              {
                  sum+=num[i]*num[i+2];
              }
             printf("%d\n",sum);
      }
  }
  return 0;
}
