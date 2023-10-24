#include<stdio.h>
int main(){
    int my_num=88;
    switch(my_num){
        case 88:
        printf("Value is 88");
        break;
        case 77:
        printf("Value is not 88");
        break;
        default:
        printf("VAlue is out of range");
        break;
    }
    return 0;
}