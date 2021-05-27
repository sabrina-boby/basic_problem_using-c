#include<stdio.h>
int main()
{
    char a[30],ch;
    int i,vowel,consonent,digit,word,other;
    printf("enter your 1st string : ");
    gets(a);
    i=vowel=consonent=digit=word=other=0;
    while((ch=a[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
                vowel++;

        else if((ch>='a' && ch<='z' )||(ch>='A' && ch<='Z'))
                consonent++;

        else if(ch>='0' && ch<='9')
                digit++;

        else if(ch==' ')
                word++;

        else
            other++;

        i++;

    }
    printf("\nvowel number is : %d\n",vowel);
     printf("consonent number is : %d\n",consonent);
      printf("digit number is : %d\n",digit);
       printf("word number is : %d\n",word+1);
        printf("other number is : %d\n",other);

}
