#include<stdio.h>
int main(int argc,char *argv[]){
    
    int ch=getchar();
    
    while(ch!=EOF){
       
        int i=0 , a=0 , flag=0 ,flag1=0; 
        if(ch>='A' && ch<='Z'){
            ch=ch+32;
            flag=1;       
        }
       
        for(i=0 ; i<26 ; i++){
            if(ch==argv[1][i]){
                a=i+97;
                flag1=1;
                if(flag==1){ 
                    a=a-32;
                    putchar(a);
                    break;
                }
                else if(flag==0){
                    putchar(a);
                    break;
                }
            }

        }
        if(flag1==0){
            putchar(ch);    
        }
        ch=getchar();
    }
    
    return 0;
}

/*if(ch>='a' && ch<='z'){
            ch=ch-97;
            ch=argv[1][ch];    
        }
        else if(ch>='A' && ch<='Z'){
            ch=ch-65;   
            ch=argv[1][ch];
            ch=ch-32;
        } */
        