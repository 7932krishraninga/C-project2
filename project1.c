// print all alphabets a to z using do while loop skipping 3 letters
#include<stdio.h>
void main(){
    char letters,i='a';



    // for(char i='a';i<='z';i+=4){
    //     printf(" %c",i);
    // }
    printf("Alphabet Skipper by do-while loop:");

    do{
        printf("\n %c",i);
        i+=4;
    }while ( i<='z');

    
}