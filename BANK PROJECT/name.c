#include<stdio.h>
int write(int i)
{
    FILE *fp;
    char n[100];
    fp=fopen("data.txt","w");
    printf("Enter your name\n");
    gets(n);
    fprintf(fp,"%s",n);
    return(1);
}
