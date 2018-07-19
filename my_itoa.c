#include <stdio.h>

//除printf函数之外，不用任何c语言库函数，实现将整数转化为字符串的函数myitoa(可以支持负整数的转化)。
int my_itoa(int a,char *bufin)
{
    char temp;
    int flag=0;
    char buf[20];
    int i=0,j=0;
    if(bufin==NULL)
    {
        return -2;
    }
    if(a==0)
    {
        buf[0]='0';
        buf[1]='\0';
        return 0;
    }
    else if(a<0)
    {
        a=0-a;
        flag=1;
    } 
    for(; a!=0 ;)
    {
        temp=a%10+'0';
        a=a/10;
        buf[i]=temp;
        i++;
    }
    i--;
    if(flag=-1)
    {
        bufin[0]='-';
        j++;
    }
    for(;i>=0;)
    {
        bufin[j]=buf[i];
        j++;
        i--;
    }
    bufin[j]='\0';
    return 0;
}
int main()
{

    char bufin[20];
    int a=-990;
    int ret=0;
    ret = my_itoa(a,bufin);
    if(ret!=0)
    {
        printf("error:%d",ret);
        return -2;
    }
    printf("%s",bufin);
    return 0;
}
