#include<stdio.h>


//全局变量定义必须以g开头//
//全局变量定义在函数外部，作用域是程序（进程）退出（结束）才失效//
//局部变量在栈区，全局变量在堆区//
//全局变量同生命周期 存在在全局区//
int   g_num = 10;
static int g_vara = 20;                        
int main()
{

    //只要变量定义在函数内部就是局部变量 作用域；离开函数就失效//
 int localVara = 5;
 //代码规范：在栈空间开辟出的内存不得超过8m，如果超过8m，会发生栈溢出//
 //时间和空间//
 //时间体现的就是代码块，效率高//
 //空间体现的是内存的大小//


    return 0;
}