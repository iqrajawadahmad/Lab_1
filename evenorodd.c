#include<stdio.h>
int main(){
    int no;
    printf("Enter number: \n");
    scanf("%d",&no);
    if (no%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}