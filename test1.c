#include <stdio.h>
// 声明外部符号
extern int g_val;
int main(){
    printf("%d\n",g_val);

    return 0;
}


static int Add(int x,int y){
    return x+y;
}