#include<stdio.h>
#include<stdlib.h>
enum STATUS_CODE
{
    REGISTEA =1,
    LOGIN,
    QUIT,
};
#define COUNT_NUM    100  //宏必须全部大写//
#define RAND_NUM   200


int main()
{
  #if 0
      /*判断语句*/
      int money = 5000;

      int apple = 7;
      int  pear = 6;
      int oringe =5;
    if (( money > apple )&&(money <pear))
    {
        printf("l am happy,get a :\n");

    }
    else (( money > pear )||)
    ;{
        printf("get a pear:\n");
    }
    



 #endif
#if 0                    //坑一：每一个case都要有break//
                          //坑二：行数过多一定需要加{}来包含//
                          //坑三：一个函数尽量不要超过80行，最多不要超过120行//
                          //坑四：

    int  choice = 0;
    printf("请输入你的选项：");
    scanf("%d",&choice);


    switch (choice)
    {
    case REGISTEA :  
        printf("welcome to  register\n");
        break ;

    case LOGIN :  
        printf("welcome to  login\n");
        break ;

    case QUIT :  
        printf("welcome to  quit\n");
        break ;




    default: 
        printf("input choice invalid");
        break;
    }









#endif
#if 0    //for循环//  //循环不允许使用i// //不允许使用魔鬼数字// 

    int randomNum = 0;
    for(int idx =0 ; idx < COUNT_NUM ; idx++)
    {
            randomNum = rand() %RAND_NUM+1;
            printf("randomNum:%d\n",randomNum);
    }

/*srand(time(NULL));

int randomNum = rand() %100+1;     

printf("randomNum:%d\n",randomNum);

 randomNum = rand() %100+1;     

printf("randomNum:%d\n",randomNum);*/




#endif

#if 1//变量尽量使用驼峰式命令// // x--先判断在运算  --先运算在判断//

    int circletime = COUNT_NUM>>1;
    int randomNum = 0;
    while ( circletime--)
    {
       randomNum = rand() %RAND_NUM+1;
        printf("randomNum:%d\n",randomNum);
    }
    






#endif

    return 0;
}