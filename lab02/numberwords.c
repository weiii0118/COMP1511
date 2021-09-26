#include <stdio.h>
int main(){
    int a;
    printf("Please enter an integer:");
    scanf("%d",&a);
    if (a<1){
        printf("you entered a number less than one.\n");
    }
    if (a>5){
        printf("you entered a number greater than five.\n");
    }
    if (a==1){
        printf("you enteres one.\n");
        }
    if (a==2){
        printf("you enteres two.\n");
        }
    if (a==3){
        printf("you enteres three.\n");
        }
    if (a==4){
        printf("you enteres four.\n");
        }
    if (a==5){
        printf("you enteres five.\n");
        }
    return 0;
}