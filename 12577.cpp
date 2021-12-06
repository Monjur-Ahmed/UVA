#include<bits/stdc++.h>
using namespace std;
int main()
{
    char names[10];
    int i=1;
    while(1)
    {
        cin>>names;
        if(strcmp(names,"*")==0) break;
        if(strcmp(names,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i++);
        }
           if(strcmp(names,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i++);
        }
    }
    return 0;
}
