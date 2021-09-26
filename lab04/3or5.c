#include <stdio.h>
int main(){
    int a,b=1;
    printf("enter number: ");
    scanf("%d",&a);
    while (b<a){
        if(b%3==0 || b%5==0){
            printf("%d\n",b);
        
        }
        b=b+1;
    }
    return 0;
}