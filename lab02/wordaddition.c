#include <stdio.h>
int main(){
    int a,b;
    printf("please enter two integers:");
    scanf("%d%d",&a,&b);
    if (a==1){
        printf("one");
    }
    if (a==2){
        printf("two");
    }
    if (a==3){
        printf("three");
    }
    printf(" + ");
    if (b==1){
        printf("one");
    }
    if (b==2){
        printf("two");
    }
    if (b==3){
        printf("three");
    }    
    printf(" = ");
    if ((a+b)==2){
        printf("two\n");
    }
    if ((a+b)==3){
        printf("three\n");
    }
    if ((a+b)==4){
        printf("four\n");
    }   

    return 0;
}