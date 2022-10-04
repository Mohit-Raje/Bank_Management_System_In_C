int check(char *s,char *t)
{
    int i,j=0,c=-1;
    for(i=0;*(s+i)!='\0';i++)
    {

        if(*(s+i)!=*(t+j))
        {
            printf("Details are wrong\n");
            c=0;
            exit(1);
        }
        c=1;
        j++;
    }

        return(c);
}
