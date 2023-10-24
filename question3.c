#include<stdio.h>
int main(){
    float height;
    printf("Enter height in centi-meters: ");
    scanf("%f",&height);
    if (height<150){
        printf("Dwarf");
    }
    else if (height==150){
        printf("Average");        
    }
    else {
        printf("Tall");
    }
    return 0;


}