#include<stdio.h>
int defnce(int b)
{
    int n,m;
    FILE *fp;
    fp=fopen("target.txt","r");
    fscanf(fp,"%d",&n);
    m=b-n;
    return(m);
}

