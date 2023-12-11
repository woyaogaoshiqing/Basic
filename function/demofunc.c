#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"calculatefunc.h"

/*函数参数可以有 也可以没有*/
/*函数返回值可以有 也可以没有
没有的情况要写void
如果有，返回你想返回的数据类型{int| long |short |char|float|double}*/
/*什么叫api：application programming interface*/

/*函数的定义*/
#if 0
void punchaseAppointThing()
{
    printf("punchase a phone\n");


}
#endif
#if 0
/*有参数，没有返回值*/
/*函数参数一定有数据类型*/
void myAddNum1(int num1, int num2)
{
    int sum = num1 +num2;
    printf("sum:%d\n",sum);
    
}
#endif
#if 0
/*case:有参数 有返回值*/
void myAddNum2(int num1, int num2)
{
    int sum = num1 +num2;
    printf("sum:%d\n",sum);
    return sum;
}

#endif
/*枚举 他也是一种数据类型*/
 typedef  enum STATUS_CODE
  {
    ON_SUCCESS,
    ON_ERROR,
    ONNULLPTR,
    ON_MALLOCFAIL,
  } STATUS_CODE;
/*取别名*/
//typedef enum STATUS_CODE STATUS_CODE;//

int main()
{   
#if 0
    /*函数的调用*/
    punchaseAppointThing();

    int num1 = 5;
    int num1 = 6;
    myAddNum1(num1,num1);
    int totalSum myAddNum2(num1,num1);
    int transFormerPrice = 10;
    if( totalSum > transFormerPrice)
    {
        printf("get a transFormer");

    }
    else
    {

    }
#endif
    STATUS_CODE status;
    int len = sizeof(status);
    printf("len:%d\n",len);

    int num1 = 50;
    int num2 = 60;
    int Sum = calculateAdd(num1,num2);
    printf("Sum:%d\n",Sum);
    
    int num3 = calculateSub(num1, num2);
    printf("num3:%d\n",Sum);

    int num4 = calculateSMul(num1,num2);
    printf("num4:%d\n",Sum);

    int num5 = calculateSDiv(num1,num2);
    printf("num5:%d\n",Sum);
    return 0;
}