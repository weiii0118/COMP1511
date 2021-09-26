#include <stdio.h>
int main(){
    int a,i=1,j=1;
    printf("enter size: ");
    scanf("%d",&a);
    while(i<=a){
       j=1;
        while (j<=a){
        if(i==j || i+j==a+1){
        printf("*");
        }
        else{
            printf("_");
        }
        j=j+1;
        
        }
        i=i+1;
        
        printf("\n");
    }
    return 0;
}