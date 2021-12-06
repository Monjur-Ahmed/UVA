#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int y;
    while(scanf("%lld",&y)!=EOF)
    {
        if(((y%400==0)||((y%100!=0) &&(y%4==0)))||(y%15==0)||(y%55==0))
        {
        if((y%400==0)||((y%100!=0) &&(y%4==0)))
        {
            printf("This is leap year.\n");
        }
        if(y%15==0)
        {
            printf("This is huluculu festival year.\n");
        }
        if(y%55==0)
        {
            printf("This is bulukulu festival year.\n");
        }
        }
        else{
            printf("This is an ordinary year.\n");
        }

    }
    printf("\n");
    return 0;
}
