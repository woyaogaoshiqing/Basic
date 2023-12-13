#include<stdio.h>
#include<string.h>



int main()
{
    char *ptr = "hello world";
    /*字符串常量？*/
    /*打印字符串的每一个字符*/
    /*使用for循环的方式*/
#if 0
    int len = strlen(ptr);
    char p ='0';
    for(int idx =0; idx < strlen(ptr); idx++)
    {
        p =*ptr;
        printf("p:%c\n",p);
        ptr++;
        printf("strlen(ptr):%ld\n",strlen(ptr));
    }
#endif
#if 0
/**/
    int len = strlen(ptr);
    char p ='0';
    for(int idx =0; idx < len; idx++)
    {
        p =*ptr;
        printf("p:%c\n",p);
        ptr++;
    }

#else
    while (*ptr !='\0')
    {
        printf("%c\t",*ptr);
        ptr++;
    }
    printf("\n");




#endif

}