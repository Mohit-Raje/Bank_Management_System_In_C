#include<stdio.h>
void  amt(float a)
{
    FILE *fp;
    fp=fopen("account.txt","w");
    fprintf(fp,"%f",a);
    fclose(fp);
}
