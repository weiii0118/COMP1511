#include<stdio.h>
/*int main(){
    printf("Enter a string: ");
    int ch=getchar();
    while(ch!=EOF){
        
        
        
        putchar(ch);
        printf("\n");
        
        ch=getchar();
        
    }
    
    return 0;
}*/
int main() 
{ 
    int a=0;
    char i[4096]; 
    printf("Enter a string :");
    fgets(i, 4095, stdin); 
    
    for(a=0;a<4095;a++){
        
        printf("%c\n", i[a]); 
        if(i[a]== '\n'){
        break;    
        }
        
    }
    return 0; 
}