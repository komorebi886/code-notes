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
int main(){
    char arr[]={'b','i','t'};
    //[b i t][      ?      ]
    printf("hello world\n");
    printf("%d\n",strlen(arr));//随机值
    return 0;
}





