#include <stdio.h>
#include <stdlib.h>
int encrypt(int character, int shift);
int main(int argc, char *argv[]) {

    int shift= 0;
    shift=atoi(argv[1]);
    shift = shift % 26;
    int character=getchar();
    while(character!=EOF){
        int nch = encrypt(character,shift);
        putchar(nch);
        
        character=getchar();
    }
    

    return 0;
}
int encrypt(int character, int shift)
{
if(character >='a'&& character <= 'z'){
        character=character+shift;
        if(character>'z')
        {
            character=character-26;
        }
        if(character<'a')
        {
            character=character+26;
        }
        return  character;
    }
else if(character>='A'&& character<='Z'){
        character=character+shift;
        if(character>'Z')
        {
            character=character-26;
        }
        if(character<'A')
        {
            character=character+26;
        }
        
        return character; 
    }
}