#include <stdio.h>
int main(){
    int a,b;

    printf("how many scoops?");
    scanf("%d",&a);
    printf("how many dollars does each scoop cost?");
    scanf("%d",&b);
    if (a*b<10){
    printf("you have enough money!\n");
    }
    else {
    printf("yoh no,you don't have enough money:(\n");
    }
    return 0;
}