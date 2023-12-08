#include <stdio.h>

#define BUFFER_SIZE 10
int main()
{
    /*如何获取数组有多少个元素：数组的总长度/每个元素的长度*/
#if 0
            char array [BUFFER_SIZE] = { 0 };

        int  arrayLen = sizeof(array);
        printf("len:%d\n",arrayLen);

        int elementLen = sizeof(array[0]);
        printf("len:%d\n",arrayLen);

        int length =arrayLen / elementLen;
        printf("len:%d\n",length);
#endif
#if 0

    char pNum = 'a';
    printf("pNum:%c\n",pNum);

    /*只要是指针的变量定义，变量定义第一个需要是p开头*/
    char * ptr ="hello world";
    printf("ptr:%s\n",ptr);


    char buffer[ ] = {'h','e','l','l','o','w','o','r','l','d'};
    int buflen = size(buffer);
    printf("buflen:%d,buffer%s",buflen,buffer);

#endif
      /*字符数组初始化定义有两种方式*/
    char buffer1[] = "helloworld";
    /*如果是以双引号（字符串）的方式 默认加上\‘0’*/
    char buffer2[] = {'h','e','l','l','o','w','o','r','l','d'};
    char buffer3[] = {'h','e','l','l','o','w','o','r','l','d'};
    printf("&buffer1:%p",&buffer1);
    printf("&buffer2:%p",&buffer2);
    printf("&buffer3:%p",&buffer3);



    /*如果是以单引号（字符）的方式 默认不加上\‘0/*/
    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);
    int buflen3 = sizeof(buffer3);
    printf("buflen1:%d,buflen2:%d,buflen3:%d\n",buflen1,buflen2,buflen3);
     printf("buffer1:%s\n, buffer2:%s\n,buffer3%s\n",buffer1, buffer2,buffer3);
    return 0;
}