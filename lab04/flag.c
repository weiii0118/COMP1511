#include <stdio.h>
int main(){
    int a,i=1,j=1;
    printf("enter the flag size: ");
    scanf("%d",&a);
    while(i<=4*a){
        j=1;
        while(j<=9*a){
        if(j==3*a || j==3*a+1 || i==2*a || i==2*a+1){
            printf(" ");
        }    
        else{
        printf("#");
        }    
            
        j=j+1;
        }
    i=i+1;
    printf("\n");
    }
    return 0;
}