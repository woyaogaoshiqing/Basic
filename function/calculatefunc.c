#include "calculatefunc.h"
#include <stdio.h>
typedef  enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR = -5,
    ONNULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDCCDSS,
} STATUS_CODE;




/*加法*/
int calculateAdd(int num1,int num2)
{
    int Sum = num1 + num2;
    return Sum;
}
/*减法*/
int calculateSub(int num1,int num2)
{
     int Sum = num1 - num2;
    return Sum;
}

/*乘法*/
int calculateSMul(int num1,int num2)
{
     int amass = num1 * num2;
    return amass;
}

/*除法*/
int calculateSDiv(int num1,int num2)
{
    if(num2 == 0)
    {
        return ON_INVALIDCCDSS;
    }
    return num1 / num2;
}