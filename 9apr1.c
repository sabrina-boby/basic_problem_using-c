//196
#include<stdio.h>
int main()
{
    char a[100],ch;
    int vowel,consonent,digit,word,others,i;
    printf("enter a string : ");
    gets(a);
    i=vowel=consonent=digit=word=others=0;
    while((ch=a[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        vowel++;
        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            consonent++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            others++;

            i++;
    }

    printf("vowel = %d\n",vowel);
    printf("consonent = %d\n",consonent);
    printf("digit = %d\n",digit);
    printf("word = %d\n",word+1);
    printf("others = %d\n ",others);
}
