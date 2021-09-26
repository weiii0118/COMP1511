#include <stdio.h>
int main(){
    int a=0,b=0,c=0;
    printf("enter your age:");
    scanf("%d",&a);
    if (a>12){
        b=a/2+7;
        c=(a-7)*2;
        printf("your dating range is %d to %d years old\n",b,c);
    }
    else {
        printf("you are too young to be dating\n");
    }
    return 0;
}