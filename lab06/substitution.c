#include <stdio.h>
//int encrypt(int ch);
int main(int argc, char *argv[]){
  
    int ch=getchar();
    
    while(ch!=EOF){
        
        //int nch=encrypt(ch);
        
        if(ch>='a' && ch<='z'){
            ch=ch-97;
            ch=argv[1][ch];    
        }
        else if(ch>='A' && ch<='Z'){
            ch=ch-65;   
            ch=argv[1][ch];
            ch=ch-32;
        } 
        

        putchar(ch);
        ch=getchar();
    }
    return 0;
}
//int encrypt(int ch){
       
//return ch;     
//}