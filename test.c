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
// int Add(int x,int y){
//     return x+y;
// }
// int main(){
//     int sum=Add(2,3);//()就是函数调用操作符，Add，2，3都是()的操作数

//     return 0;
// }


//typedef就是给复杂的类型重命名
// typedef unsigned int unit;

// typedef struct Node
// {
//     int data;
//     struct Node * next;
// }Node;

// int main(){
//     unsigned int num=0;
//     unit num2=1;
//     struct Node n;
//     Node n2;

//     return 0;
// }


//static
// 1.修饰局部变量
// 2.修饰全局变量
// 3.修饰函数

// 局部变量
// void test(){
//     static int a=1;
//     // static修饰局部变量的时候，局部变量出了作用域，不销毁的。(也就是锁住了)
//     // 本质上，static修饰局部变量的时候，改变了变量的存储位置的。
//     // 影响了变量的生命周期，生命周期变长，和程序的生命周期一样。
//     a++;
//     printf("%d\n",a);
// }
// int main(){
//     int i =0;
//     while(i<10){
//         test();
//         i++;
//     }

//     return 0;
// }


// // 全局变量
//  static int g_val=2022;
// //  static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内部链接属性。其他源文件(.c)就不能再使用到这个全局变量了。


// // static 修饰函数
// extern int Add(int x, int y);

// int main(){
//     int a=10;
//     int b=20;

//     int z=Add(a,b);
//     // 一个函数本来是具有外部链接属性的，但是被static修饰的时候，外部链接属性就变成了内部链接属性，其他源文件(.c)就无法使用了
//     printf("%d\n",z);

//     return 0;
// }


// // register寄存器变量
// int main(){
//     // 寄存器变量
//     register int num=3;//建议：3存放在寄存器中

//     return 0;
// }


// // define定义标识符常量
// #define NUM 100


// // #define 定义宏
// // 宏是有参数

// #define ADD(x,y) ((x)+(y))

// int Add(int x, int y){
//     return x+y;
// }


// int main(){
//     printf("%d\n",NUM);
//     int n=NUM;
//     printf("%d\n",n);
//     int arr[NUM]={0};
//     int a=10;
//     int b=20;
//     int c=ADD(a,b);

//     printf("%d",c);
    
//     return 0;
// }


// int main(){
//     int a=10;//向内存申请4个字节，存储10
//     //&a;//取地址操作符
//     //printf("%p\n",&a);//0x0012ff40
//     int * p=&a;
//     //p就是指针变量
//     // *p=20;//解引用操作符，意思就是通过p中存放的地址，找到p所指的对象，*p就是p指向的对象

//     printf("%d\n",a);

//     // char ch='w';
//     // char * pc=&ch;

//     return 0;
// }


// int main(){
//     int * p;
//     char * p2;
//     // 不管是什么类型的指针，都是在创建指针变量
//     // 指针变量是用来存放地址的
//     // 指针变量的大小取决于一个地址存放的时候需要多大空间
//     // 32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//     // 64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节

//     printf("%zu\n",sizeof(char*));//8
//     printf("%zu\n",sizeof(short*));//8
//     printf("%zu\n",sizeof(int*));//8
//     printf("%zu\n",sizeof(float*));//8
//     printf("%zu\n",sizeof(double*));//8

//     return 0;
// }


//结构体
//学生
struct Stu{
    // 成员
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};
void print(struct Stu * ps){
    printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
    // ->
    
}
int main(){
    struct Stu s={"zhangsan",20,"nan","15596668862"};

    printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);

    return 0;
}