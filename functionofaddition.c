#include<stdio.h>
int myfunc(int x,int y)
{
    return x+y;
    }
int main(){
    int result=myfunc(3,6);
    printf("Result is= %d",result);
    return 0;
}