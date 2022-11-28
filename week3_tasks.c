/*Your job is to write a C-program that will tell a fan which line to stand in.
To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. 
Your program should output an integer value (1 or 2) depending on whether the fan should join line 1 (name has even number of letters)
or line 2 (name has odd number of letters).*/

#include <stdio.h>
int main (void){
    char name[51];
    scanf("%s", name);
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    if(i%2==0){
        printf("1");
    }else{
        printf("2");
    }
    return 0;
}


/*Write a C-program that prints out a word as many times as specified. The number of repetitions and the word 
should be given as input to the program. You may assume that the word has no more than 100 characters 
(be sure to also reserve space for the null terminator, \0, though!).*/

#include <stdio.h>
int main (void){
    int times = 0;
    char word[101];
    scanf("%d %s", &times, word);
    for(int i=0; i<times;i++){
        printf("%s\n", word);
    }
    return 0;
}

