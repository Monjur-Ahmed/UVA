#include<bits/stdc++.h>
using namespace std;
int main()
{
    string websites[10];
    int t,value[10];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<10;i++)
        {
            scanf("%s %d",websites[i],&value[i]);
        }

     map<int ,string>m;
     for(int i=0;i<10;i++)
     {
         m.insert(make_pair(value[i],"websites[i]"));
     }

    }


    return 0;

}
