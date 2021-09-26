#include <stdio.h>
int main(){
    int a,i=1,sum=0;
    printf("enter number: ");
    scanf("%d",&a);
    printf("the factors of %d are:\n",a);
    while (i<=a){
        if(a%i==0){
            printf("%d\n",i);
        sum=sum+i;
        }  
        i=i+1; 
    }

    printf("sum of factors = %d\n",sum);
    if(a==sum-a){
        printf("%d is a perfect number.\n",a);
    }
    else {
        printf("%d is not a perfect number.\n",a);
    }
    return 0;
}