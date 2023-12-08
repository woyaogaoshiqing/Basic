#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10
int main()
//数组1.他是一段连续的存储空间 2.他里面存放的数据类型是相同的//
{

    int a;
    





    int array[BUFFER_SIZE];


    for(int idx = 0;idx < BUFFER_SIZE ; idx++)
     {
            printf("array[%d] = %d\n" ,idx  , array[idx]);

     }

    
    int len = sizeof(array);
     printf(" len %d\n", len );



     //地址
    printf("%p\n",&array[0]);
    printf("%p\n",&array[1]);
    printf("%p\n",&array[9]);
    /*数组的首地址和数组的首元素的地址是一样的*/

     //清楚脏数据
     memset(array,1,sizeof(array));
     printf("================\n");


     for(int idx = 0;idx < BUFFER_SIZE ; idx++)
     {
            printf("array[%d] = %d\n" ,idx  , array[idx]);

     }


    return 0;
}