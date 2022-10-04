#include<stdio.h>
#include"amount.c"
#include"safe.c"
#include"name.c"
struct bank
{
    char username[100],password[100];
    float a;
};
void details(int z)
{
    struct bank b;
    char ch;
    float a;
    int pin,n,r;
    FILE *fp;
    fp=fopen("source.txt","w");

    {
    r=write(n);
    fflush(stdin);
    printf("Enter your username\n");
    gets(b.username);
    fprintf(fp,"%s",b.username);
    fflush(stdin);
    printf("Enter your password\n");
    gets(b.password);
    fprintf(fp,"%s",b.password);
    fflush(stdin);
    printf("Enter 4 digit pin for security\n");
    scanf("%d",&pin);
    scrty(pin);
    fflush(stdin);
    printf("Enter the amount\n");
    scanf("%f",&a);
    amt(a);
    fflush(stdin);

    }
}
void forget(int y)
{
    struct bank b;
    char ch;
    float a;
    FILE *fp;
    fp=fopen("source.txt","w");

    {

    fflush(stdin);
    printf("Enter new username\n");
    gets(b.username);
    fprintf(fp,"%s",b.username);
    fflush(stdin);
    printf("Enter new password\n");
    gets(b.password);
    fprintf(fp,"%s",b.password);
    fflush(stdin);
    }
getch();

}
