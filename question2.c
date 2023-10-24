#include<stdio.h>
int main(){
    int height;
    int width;
    printf("Enter height:");
    scanf("%d",&height);
    printf("Enter width:");
    scanf("%d",&width);
    printf("Area of triangle: %.2f\n",((0.5)*height*width));
    printf("Perimeter of triangle: %d",height+width);
    return 0;

}