#include<stdio.h>

int main() 
{ 
    int a=0,c=0,flag=0;
    float b=0 ;
    char i[4096]; 
    printf("Enter a string :");
    fgets(i, 4095, stdin); 
    
    for(a=0;a<4095;a++){
        if(i[a]== '\n'){
        break;    
        }
    }
    a--;
    //printf("%d\n",a);
    b=(float)a/2;   
    //printf("%.1f\n",b);
    for(c=0;c<=b;c++){
        //printf("(%d)",c);
        if(i[c]==i[a-c]){
            flag++;
        }    
    }
    //printf("%d\n",flag);
    if(flag>=b){
        printf("String is a palindrome\n");
    }
    else{
        printf("String is not a palindrome\n");
    }
    return 0; 
}