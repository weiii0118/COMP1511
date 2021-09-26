#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
      printf("you have entered a positive number.\n");  
    };
    if(a<0){
      printf("don't be so negative!\n");  
    };
    if(a==0){
      printf("you have entered zero.\n");  
    };
    return 0;
}