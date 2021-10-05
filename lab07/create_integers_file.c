// Simple example of file creation
// creates file "andrew.txt" containing 1 line ("Andrew rules!")
// Andrew Taylor - andrewt@unsw.edu.au
// 8/3/18

#include <stdio.h>
#include <stdlib.h>

/*int main(int argc, char *argv[]) {
    FILE *outputStream;

    outputStream = fopen("andrew.txt","a");
    if (outputStream == NULL) {
        fprintf(stderr, "%s: open of '%s' failed\n", argv[0], "andrew.txt");
        return 1;
    }

    fprintf(outputStream, "Andrew rules!\n");
    fclose(outputStream);

    return 0;
}*/
int main(int argc, char *argv[]){
    int i=0,a=0,b=0,c=0;
    if(argc!=4){
        printf("E R R O R\n");
        return 0;
    }
    //printf("%d \n",argc);
    //for(i=0;i<4;i++){
    //    printf("%s\n",argv[i]);
    //}
    FILE *outputStream;

    outputStream = fopen(argv[3],"a");
    
    
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    for(c=a;c<=b;c++){
        fprintf(outputStream,"%d\n",c);
    }
    fclose(outputStream);

    
    return 0;
}