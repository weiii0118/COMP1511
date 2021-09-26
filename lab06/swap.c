#include <stdio.h>
int swap_case(int ch);

int main(void){
    
    int ch=getchar();
    while(ch!=EOF){
        int nch=swap_case(ch);
        putchar(nch);
        
        ch=getchar();
    }
    return 0;
}

    
    

int swap_case(int ch)
{

if(ch >='a'&& ch <= 'z'){
        ch=ch-32;
        return  ch;
    }
else if(ch>='A'&& ch<='Z'){
        ch=ch+32;
        return ch; 
    }
    
    
   
}