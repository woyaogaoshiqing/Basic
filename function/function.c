#include<stdio.h>


void Swap(int *x,int *y)
{   //x y形式参数//
    int z = 0;
    z = *x;
    *x = *y;
    *y = z;
}

int add(int x,int y)
{
    int z = 0;
    z = x + y;
    return z;
}



int main()
{   
#if 0  
    
    
    
    //实际参数//
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    printf("交换前：a =%d,b =%d\n",a,b);
    Swap(&a,&b);
    printf("交换后：a =%d,b =%d\n",a,b);
    
    //传参时是否要传地址取决于是否有必要改变实参的值//
    int c = add(a,b);
    printf("c:%d\n",c);
#endif
#if 1  
    
    
    
    
#endif




    return 0;
}