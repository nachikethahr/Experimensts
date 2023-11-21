#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void main()
{
    int a[10],i,n=0;
    char str[20],str1[20];
    printf("enter the string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        a[i]=(str[i]);
        n=n+1;
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]-17;
        if(a[i]<32)
        {
            a[i]=a[i]+94;
        }
        str1[i]=a[i];
    }
    str1[n]='\0';
    puts(str1);
    getch();
}
