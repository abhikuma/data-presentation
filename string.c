#include<stdio.h>
#include<string.h>
void substr(char ch[])
{
    int p,l,i=0;
    char c[10];
    printf("enter the position and length\n");
    scanf("%d%d",&p,&l);
    while(i<l)
    {
        c[i]=ch[p+i-1];
        i++;
    }
    c[i]='\0';
    printf("%s",c);
}
void caseconvert(char ch[])
{
    int i=0;
    while(ch[i]!=NULL)
    {
       // printf("HELLO");
        if(ch[i]>='a'&& ch[i]<='z')
            ch[i]-=32;
        else if(ch[i]>='A'&& ch[i]<='Z')
            ch[i]+=32;

        i++;
    }
   printf("%s",ch);
}
void count_a_word(char ch[])
{
    int i,frq=0,l=strlen(ch),t,h,e,sp;
    for(i=0;i<l;i++)
    {
     t=(ch[i]=='t'||ch[i]=='T');
     h=(ch[i+1]=='h'||ch[i+1]=='H');
     e=(ch[i+2]=='e'||ch[i+2]=='E');
     sp=(ch[i+3]==' '||ch[i+3]=='\0');
     if(t&&h&&e&&sp)
            frq++;
    }
    printf("frequency is %d",frq);
}
void concat(char ch[],char ch1[])
{
    int i=0,l=strlen(ch),l1=strlen(ch1);
    while(ch1[i]!=NULL)
    {
        ch[l-1+i]=ch1[i];
        //printf("%c",ch[i]);
        i++;
    }
    ch[l-1+i]='\0';
    printf("%s",ch);
}

void replace_space_by(char ch[])
{
    int i=0,f=0;
    while(ch[i]!=NULL)
    {
        if(ch[i]==' ')
            ch[i]='*';
            if(ch[i]==44||ch[i]==46)
                f++;
        i++;
    }
    printf("%s and puntuation no is %d",ch,f);
}

void remove_space(char ch[])
{
    int count=0,i=0;
    while(ch[i]!=NULL)
    {
        if(ch[i]!=' ')
            ch[count++]=ch[i];
        i++;
    }
    ch[count]='\0';
    printf("%s",ch);
}

void check_character()
{

    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>=48&& ch<=57)
        printf("character is digit\n");
    else if(ch>='a'&& ch<='z')
        printf("character is in lower case \n");
    else if(ch>='A'&& ch<='Z')
         printf("character is in upper case \n");
    else
         printf("character is special character \n");
}
int main()
{
    char str[100],ch1[100];
    int i,max=0;
    printf("enter 1st string\n");
    fgets(str,sizeof(str),stdin);
    // printf("enter 2nd string\n");
    //fgets(ch1,sizeof(ch),stdin);
    //substr(ch);
    //caseconvert(ch);
   // count_a_word(ch);
     //concat(ch,ch1);
    //replace_space_by(ch);
     //remove_space(ch);
     //check_character();
     int fre[256]={0},ascii;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        fre[ascii] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<256; i++)
    {
        if(i!=32)
        {
        if(fre[i] > fre[max])
            max = i;
        }
    }
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max,fre[max]);
}

