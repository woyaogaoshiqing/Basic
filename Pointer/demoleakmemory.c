#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define BUFFER_SIZE 10
/*内存泄漏 :3种场景 1.野指针2.malloc出的空间没有被释放3.踩内存（read|invalid）*/


int main()
{
#if 0/*什么情况下会导致内存泄漏*/
    //case1：野指针

    int a;
    printf("a:%d\n",a);
    
    int array[10];
    for(int idx = 0; idx<sizeof(array)/sizeof(int); idx++)
    {
        printf("%d\t",array[idx]);
    }
    char *p;  //p = 0x4654646;
    printf("\n");
    return 0;
#endif

#if 0
    char *p;
    printf("\n");
    return 0;
#endif
#if 1
    /*极度危险的函数，使用strcpy*/
    char *ptr = (char*)malloc(sizeof(char)* BUFFER_SIZE);
    if(!ptr)
    {
        /*todo*/
        /*状态码*/
        return -1;
    }
    memset(ptr, 0 ,sizeof(char) * BUFFER_SIZE);
    /*使用malloc分配的空间，数据是脏的*/
    /*使用安全*/
    strncpy(ptr, "hello world", BUFFER_SIZE - 1);
    printf("ptr%s\n",ptr);
    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
     if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
#endif 
    


    return 0;

}