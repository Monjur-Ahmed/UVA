#include<bits/stdc++.h>
using namespace std;
int main()
{
            char words[14];
            int i=1;
         while(scanf("%s",words)!=EOF)
         {

                  if   (strcmp(words,"#")==0) break;
                   if    (strcmp(words,"HELLO")==0)
                {
                    printf("Case %d: ENGLISH\n",i++);
                }
             else   if   (strcmp(words,"HOLA")==0)
                {
                     printf("Case %d: SPANISH\n",i++);

                }
                else  if   (strcmp(words,"HALLO")==0)
                {
                     printf("Case %d: GERMAN\n",i++);

                }
                else   if   (strcmp(words,"BONJOUR")==0)
                {
                     printf("Case %d: FRENCH\n",i++);

                }
            else      if   (strcmp(words,"CIAO")==0)
                {
                     printf("Case %d: ITALIAN\n",i++);

                }
              else     if   (strcmp(words,"ZDRAVSTVUJTE")==0)
                {
                     printf("Case %d: RUSSIAN\n",i++);
                }
                 else
                {
                     printf("Case %d: UNKNOWN\n",i++);
                }

            }

return 0;
}
