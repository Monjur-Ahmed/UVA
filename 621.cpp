#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--)
    {
         char num[100];
         scanf("%s",num);
         int s=strlen(num);
        if ((strcmp(num,"78")==0)||(strcmp(num,"4")==0)||(strcmp(num,"1")==0))
        {
            printf("+\n");
        }

        else if ((num[s-1]=='5')&&(num[s-2]=='3'))
        {
            printf("-\n");
        }
    else   if ((num[0]=='9')&&(num[s-1]=='4'))
        {
            printf("*\n");
        }
    else     if((num[0]=='1')&&(num[1]=='9')&&(num[2]=='0'))
        {
            printf("?\n");
        }
        else{
            printf("?\n");
        }

    }

    return 0;
}
