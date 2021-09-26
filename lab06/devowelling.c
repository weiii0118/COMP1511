/*#include <stdio.h>

int make_upper_case(int character);

int main(void) {
    // getchar returns an int which will contain either
    // the ASCII code of the character read or EOF

    int character = getchar();
    while (character != EOF) {

        int new_character = make_upper_case(character);
        putchar(new_character);

        character = getchar();
    }
    return 0;
}
int make_upper_case(int character) {
    if (character >= 'a' && character <= 'z') {
        int alphabetPosition = character - 'a';
        return 'A' + alphabetPosition;
    } else {
        return character;
    }
}*/
#include <stdio.h>

int devo(int ch);

int main(){
    int ch=getchar();
    while(ch!=EOF){
        int nch=devo(ch);
        putchar(nch);
        
        ch=getchar();
    }
    return 0;
}
int devo(int ch){
    if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u'){
        return ch;
    }
    else{
        return 0;
    }
   
    
}