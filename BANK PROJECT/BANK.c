#include<stdio.h>
#include<string.h>
#include "ret.c"
void accholder(int f)
    {
     char us[100],ps[100],s[100],m[100],a[100],str[100];
    int x,y,i=0,z=1,j,b=1,k;
    float h;
    char ch;
    FILE *fp;
    fp=fopen("source.txt","r");
    printf("Enter the username\n");
    gets(us);
    printf("Enter the password\n");
    gets(ps);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        s[i]=ch;
        i++;
    }
    strcat(us,ps);
    k=check(us,s);

    if(k==1)             //error,,,,,x==1 it should be x==0//
    {
        printf("\nAccount details are correct\n");
        retrn(z);
    }
getch();

}
