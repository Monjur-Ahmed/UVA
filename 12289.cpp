#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char word[12];
    cin>>t;
    while(t--)
    {
        cin>>word;
           if  (((word[0]=='o' ) && (word[2]=='e' ))||((word[1]=='n' ) && (word[2]=='e' ))||((word[0]=='o' ) && (word[1]=='n' )))
             {
                  printf("1\n");
             }
        else   if( ((word[0]=='t') &&(word[2]=='o'))||((word[1]=='w') &&(word[2]=='o'))||((word[0]=='t') &&(word[1]=='w')))
        {
          printf("2\n");
        }
         else
        {
          printf("3\n");
        }
}
return 0;
}
