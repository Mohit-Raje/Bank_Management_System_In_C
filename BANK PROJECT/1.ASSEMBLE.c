#include<stdio.h>
#include"INPUT.c"
#include"BANK.c"
#include "safe1.c"
#include"met.c"
#include"program.c"
main()
{
    int x=1,y=2,z=3,pin,difference,i=0,j;
    char ch,ph,str[100],nme[100];

    FILE *fp;
    fp=fopen("data.txt","r");
    system("color 9");
    printf("Welcome user\n");
    printf("Enter y/Y if you have an account\n");
    printf("Enter c/C if you want to create an account\n");
    printf("Enter f/F if you want reset the account username and password\n");
    scanf("%c",&ch);
    fflush(stdin);
    if(ch=='c'||ch=='C')
    {
          details(x);
    }
    else if(ch=='y'||ch=='Y')
    {
               accholder(y);
    }
    else if(ch=='f'||ch=='F')
    {
        printf("Enter your name for security reasons\n");
        gets(nme);
        fflush(stdin);
        printf("Enter your pin for security purpose\n");
        scanf("%d",&pin);
        fflush(stdin);
        difference=defnce(pin);
        while(!feof(fp))
        {
             ph=fgetc(fp);
             str[i]=ph;
             i++;
        }
         j=strcmp(nme,str);
         fflush(stdin);
         if(difference==0||j==0){
                printf("Details are correct\n");
         printf("You can change your username and password\n");
          forget(z);
         }
         else{
                printf("SORRY THE PIN THAT YOU HAVE ENTERED IS WRONGE CANNOT RESET THE LOGIN CREDENTIALS\n");

    }
    getch();
    }

}

