#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE  16
int main()
{
#if 0
/*数组的初始化*/
    char array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    /*for(int idx = 0; idx < BUFFER_SIZE; idx++)       //函数三要素 函数名
    {


    }*/


#endif


#if 0
/*字符数组*/
    char array[BUFFER_SIZE] = "hello world";
    int len =sizeof(array);
    printf("len:%d, array:%s\n",len,array);
#endif

#if 0
    char array[BUFFER_SIZE] = "hello world";
    /*第一个strlen */
    int len = strlen(array);
    printf("len:%d\n",len);
    /*第二个strcpy*/
    char name[BUFFER_SIZE];
    memset(name, 0,sizeof(name));
    strcpy(name, "zhangsan");
    printf("name:%s\n",name);
    /*第三个strcat*/
    /*strcat(name,"is a boy");
    printf("name:%s\n",name);*/
    /*第四个strcmp*/
    char name2[BUFFER_SIZE]="zhangSan";
    int ret =strcmp(name,name2);
    printf("ret:%d\n",ret);

#endif

#if 1
    /*字符串(常量)*/
    /*指针出入*/
    char* ptr = "hello world";
    int len = strlen(ptr);
    int size =   sizeof(ptr);


    printf("len:%d\n",len);
    printf("size:%d\n",size);

    
    printf("*ptr:%c\t*(ptr+1):%c,ptr:%s\n",*ptr,*(ptr+1));
    
    
    
    *(ptr + 1)='H';
     printf("*ptr:%c\t*(ptr+1):%c,ptr:%s\n",*ptr,*(ptr+1));


#endif

    return 0;
}