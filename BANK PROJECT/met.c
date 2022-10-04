#include<stdio.h>
void retrn(int z)

{
    float g;
    FILE *fp;
    fp=fopen("account.txt","r");
    fscanf(fp,"%f",&g);
    printf("Account balance is %f",g);
}

