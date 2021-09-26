#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter integer:");
    scanf("%d",&a);
    printf("enter integer:");
    scanf("%d",&b);
    printf("enter integer:");
    scanf("%d",&c);
    if (a>b && b>c){
        printf("the integers in order are:%d %d %d\n",c,b,a);   
    }
    if (a<b && b<c){
        printf("the integers in order are:%d %d %d\n",a,b,c);   
    }
    if (a>b && b<c && a>c){
        printf("the integers in order are:%d %d %d\n",b,c,a);   
    }
     if (a>b && b<c && a<c){
        printf("the integers in order are:%d %d %d\n",b,a,c);   
    }
     if (a<b && b>c && c>a){
        printf("the integers in order are:%d %d %d\n",a,c,b);   
    }
     if (b>a && a>c && b>c){
        printf("the integers in order are:%d %d %d\n",c,a,b);   
    }
    

    return 0;
}
