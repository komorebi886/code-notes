#include<stdio.h>
#include<string.h>

/*
很多互联网公司在笔试环节都采用在线OJ的形式
1.IO型
所有的代码都是自己来完成和实现
输入，计算，输出

2.接口型
只需要完成一个函数
假设其他需要的数据都是准备好的

eg：
int Add(int x,int y){
    int z=0;
    z=x+y;
    return z;
    }

    int main(){
    int a=10;
    int b=20;
    int c=Add(a,b);
    printf("%d\n",c);
    return 0;
    }
    也就是只需完成一个函数Add的实现，其他的main函数和输入输出都是系统已经准备好的。
*/
/*
字符串的结束标志是：\0
EOF  -end of file 文件的结束标志 值是-1
*/
// int main(){
//     printf("hello world\n");
//     int a=40;
//     int c=212;
//     int r = (-8 + 22) * a - 10 + c / 2;
//     printf("%d\n",r);
//     return 0;
// }
// int main(){
//     printf("%d\n",strlen("c:\test\121"));
//     return 0;
// }



// 0 - 数字0
// '0' - 字符0 - ASCII值是48
// '\0' - 字符 - ASCII值是0
// 第一个和第三个其实是没什么区别的
// 所以你给数组里面放个数字0或者放个\0其实是没什么区别的

// int main(){
//     // char arr[]={'b','i','t'};
//     //[b i t][      ?      ]
//     char arr[8]={'b','i','t'};
//     //不完全初始化，剩余的部分默认初始化为0
//     printf("hello world\n");
//     printf("%d\n",strlen(arr));//随机值
//     return 0;
// }



// int main(){
//     int arr[10]={1};
//     int n=10;
//     int arr[n];
//     //C99标准之前，数组的大小都是用常量或者常量表达式来指定
//     int arr2[10]={0};//ok
//     int arr3[4+6]={1,2,3,4};//ok

//     //C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的。
//     int m=100;
//     int arr4[m];

//     //vs对C99中的一些语法支持不是很好，不支持变长数组的
//     return 0;
// }


// int Max(int x, int y){
//     if(x>y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }
// int main(){
//     int a=0;
//     int b=0;
//     scanf("%d %d",&a,&b);
//     int r=Max(a,b);
//     printf("%d\n",r);

//     return 0;
// }


// int main(){
//     int x=0;
//     int y=0;
//     scanf("%d",&x);
//     if(x>0){
//         y=-1;
//     }
//     else if(x==0){
//         y=0;
//     }
//     else{
//         y=1;
//     }
//     printf("%d\n",y);

//     return 0;
// }


// int main(){
//     // int a=7/2;
//     // int b=7%2;
//     // printf("%d\n",a);
//     // printf("%d\n",b);
//     //  / 除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//     float a=7/2.0;
//     int b=7%2;
//     //对于取余操作符的两个操作数只能是整数
//     printf("%.2f\n",a);
//     printf("%d\n",b);

//     return 0;
// }


// 单目操作符 - 只有一个操作数的操作符
//eg： ! - 逻辑非操作符


//sizeof是操作符，是单目操作符
// int main(){
//     int a=10;
//     printf("%d\n",sizeof(a));//4
//     printf("%d\n",sizeof(int));//4
//     printf("%d\n",sizeof a );//4

//     int arr[10]={0};
//     printf("%d\n",sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//     printf("%d\n",sizeof(arr[0])); //4 计算的是数组中第一个元素的大小，单位是字节
//     printf("%d\n",sizeof(arr)/sizeof(arr[0]));//10 计算的是数组中元素的个数

//     return 0;
// }



// int main(){
//     int a=10;
//     int b=20;
//     int r=a>b?a:b;
//     //条件操作符 --- 也叫三目操作符
//     printf("%d\n",r);

//     return 0;
// }


// 逗号表达式就是逗号隔开的一串表达式
// 逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

// int main(){
//     int a=10;
//     int b=20;
//     int c=0;
//     //     c=8   a=28  5
//     int d=(c=a-2,a=b+c,c-3);
//     printf("%d\n",d);

//     return 0;
// }


// int main(){
//     //定义一个数组大小的时候最好用常量
//     //访问数组下标的时候可以用变量
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int n=3;
//     arr[n]=20;//[]就是下标引用操作符   arr和3就是[]的操作数
    
//     //a+b
//     return 0;
// }


//函数调用操作符()
int Add(int x,int y){
    return x+y;
}
int main(){
    int sum=Add(2,3);//()就是函数调用操作符，Add，2，3都是()的操作数

    return 0;
}
