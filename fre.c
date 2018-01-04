#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int fre[256]={0},i=0,max=0;
    while(ch[i]!=NULL)
    {
        fre[ch[i]]++;
        i++;
    }
    for(i=0;i<256;i++)
    {
        if(i!=32)
        {
            if(fre[i]>fre[max])
                max=i;
        }
    }
     printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max,fre[max]);
}
