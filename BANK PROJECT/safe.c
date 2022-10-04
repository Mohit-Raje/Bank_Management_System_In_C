#include<stdio.h>
#include<stdlib.h>
void scrty(int a)
{
    FILE *fp;
    fp=fopen("target.txt","w");
    fprintf(fp,"%d",a);
}
