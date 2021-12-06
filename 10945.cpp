#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sent;
    string rev;
     while(getline(cin,sent))
     {
         if(sent=="DONE")break;
         string temp="";

       for(int i=0;i<sent.size();i++)
       {
           if(isalpha(sent[i]))
           {
               temp+=tolower(sent[i]);
           }
       }
       rev=temp;
    reverse(rev.begin(),rev.end());
       if(rev==temp)
       {
           printf("You won't be eaten!\n");
       }
       else
       {
           printf("Uh oh..\n");
       }

     }


return 0;
}
