#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define BUFFER_SIZE 32
/*指针*/
int main()
{   
#if 0   
    //1.指针怎么定义
    //基础数据类型
    //建议：定义变量记得初始化
    int a = 0;
    long b = 0;


    /*指针的定义*/
    int *p = NULL;

#endif
#if 0
    /*指针的使用：指针内存存放的是某变量的地址*/
    int a = 5;
    int *p = &a;

    printf("a:%d\n",a);
    printf("&a:%p\n",&a);
    /*非常重要*/
    printf("*(&a):%d\n",*(&a));

    printf("*P:%d\n",*p);
     printf("P:%p\n",p);
     printf("&p:%p\n",&p);
#endif     
#if 0
    int * ptr = &p;
    printf("ptr:%p\n",ptr);
#endif
#if 0
    int **ptr = &p;
    printf("ptr:%p\n",ptr);
    printf("*ptr:%p\n",*ptr);
    /*非常非常重要*/
    printf("*(*ptr):%d\n",*(*ptr));
    /* *p就是解引用（读写数据）*/
    int ***pptr = &ptr;
    printf("*(*(*pptr)):%d\n",*(*(*pptr)));
    printf("*(*ptr):%d\n",*(*ptr));
    printf("*ptr:%p\n",*ptr);
    printf("ptr:%p\n",ptr);
#endif
#if 0
    /*指针的特性:指针占用的内存大小是8个字节（64位操作系统）
    如果是32位操作系统占用的大小是4个字节*/
    int a = 5;
    int len = sizeof(a);
    printf("len:%d\n",len);

    char p = 97; 
    len = sizeof(p);
    printf("len:%d\n",len);

    char * ptr = &p;
    printf("%c\t%d\n",*ptr,*ptr);
    len = sizeof(ptr);
    printf("len:%d\n",len);

    int *ptrInt = &a;
    printf("%d\n",*(&a));
    printf("%d\n",*ptrInt);
#endif
#if 0
   /*指针特性2：指针和字符串*/
    /*字符串是区别字符数组的*/
    char * ptr1 = "hello world";
    int len = sizeof(ptr1);
    printf("len:%d\n",len);

    /*q:怎么获取字符串的长度*/
    int length =strlen(ptr1);
    printf("%d\n",length);


    
    char name[BUFFER_SIZE] = {0};
    strcpy(name,"zhangsan");
    printf("name:%s\n",name);

    /*q:我要给字符串赋值*/
    char *ptr2 = NULL;
    ptr2 = "zhangsan";
    printf("ptr:%s\n",ptr2);
#endif
  /*堆空间*/ 
    char *ptr2 = NULL;
    ptr2 = "zhangsan";
    printf("ptr:%s\n",ptr2); 
    
  /*void*是一个指针，被称为万能指针*/
    char ptr = (char*)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr,"zhangsan");
    printf("ptr%S\n",ptr);

    return 0;
}