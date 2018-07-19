#include <stdio.h>
#include<string.h>

//除printf函数之外，不用任何c语言库函数，实现将字符串转化为整数的函数myatoi(可以支持负整数的转化)。
int my_atoi(char *buf, int len, int *a)
{
    int ret=0;
    char *temp=buf;
    int flag=0;
    int sum=0;
    if(buf==NULL)
    {
        ret=-1;
    }
    for(int i=0;i<len;i++)
    {
        if(temp[i]==' ')
        {
            ;
        }
        else if(temp[i]=='+') {
            flag=1;
        }
        else if(buf[i]=='-'){
            flag=-1;
        }
        else if (temp[i]>='0' && temp[i]<='9'){
            sum=sum*10+(buf[i]-'0');
        }
    }
    *a=sum;
    return 0;
}

int main()
{
    char *buf=" + 12234";
    int len = strlen(buf);
    int a=0;
    int ret=my_atoi(buf,len,&a);
    if (ret != 0)
    {
        printf("error");
        return -1;
    }
    printf("%d\n",a);
}

