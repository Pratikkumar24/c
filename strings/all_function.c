#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    printf("\n Enter a string: ");
    scanf("%s",s);
    int digit=0,vowels=0,consonent=0;
    int i=0;
    for(i=0; s[i]!='\0';i++)
    {
        
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowels++;
        }
        else
        {
            consonent++;
        }
        
    }
    printf("\n vowels: %d\n Number of digits and Consonent: %d\n",vowels,consonent);
    return 0;
}