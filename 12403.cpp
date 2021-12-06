#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int amount,total=0;
  char input[10];
  int t;
  cin>>t;
  while(t--)
  {
     cin>>input;
          if(strcmp(input,"donate")==0)
        {
            cin>>amount;
            total+=amount;
        }
           if(strcmp(input,"report")==0)
        {
            printf("%lld\n",total);
        }

  }
  total=0;
return 0;

  }



