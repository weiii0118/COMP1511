#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int i=0,j=0;
    char word[50];
    FILE *outputScream;
    if(argc==2){
        outputScream=fopen(argv[1],"r");
        while(fgets( word , 50 , outputScream)!=NULL){
        if( j==10){
            break;
        }
    
        printf("%s",word);
        j++;
        
    }
    }
    /*for(j=1;j<10;j++){
        
        fscanf(outputScream,"%d",&i);
        printf("%d\n",i);
        
        if(fscanf(outputScream,"%d",&i)==EOF){
            break;
        }
        
    }*/
    if(argc==4){
        outputScream=fopen(argv[3],"r");    
        i=atoi(argv[2]);
            while(fgets( word , 50 , outputScream)!=NULL){
                if( j==i){
                    break;
                }
    
                printf("%s",word);
            j++;

            }
    }
    fclose(outputScream);
    return 0;
}