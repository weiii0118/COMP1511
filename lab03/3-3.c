#include <stdio.h>
int isleapyear(int a){
    if((a%4==0 && a%100!=0) || a%400==0){
    return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int x,a;
    printf("enter year:");
    scanf("%d",&x);
    a=x;
    if (isleapyear(a)==0){
    printf("%d is not a leap year.\n",x);
    }
    if (isleapyear(a)==1){
    printf("%d is a leap year.\n",x);
    }
    return 0;
}