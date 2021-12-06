#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    long long value;
    value=0;
    while(scanf("%c", &ch)==1)
    {
        if(ch=='"')
        {
            value++;
            if(value%2!=0)
            {
                printf("``");
            }
            else
            {
                  printf("''");
            }
        }
        else
        {
            printf("%c", ch);
        }
    }
    return 0;
}
