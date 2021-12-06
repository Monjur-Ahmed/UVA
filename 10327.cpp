#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    while(scanf("%d",&n)!=EOF)
    {
        int value=0;
     long   int num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
         for(int i=0;i<n;i++)
         {
              for(int j=i+1;j<n;j++)
              {
                  if(num[i]>num[j])
                  {
                      temp=num[i];
                      num[i]=num[j];
                      num[j]=temp;
                      value++;
                  }
              }
         }
         printf("Minimum exchange operations : %d\n",value);

    }
}
