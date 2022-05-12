#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exampleFunction(int frank, char bob);
int thisFunctionReturnsChar(int larson, char chuck);




int main(){

    int frank = 5;
    int replacementFrank = 3;

    char bob = 'c';
    char replacementBob = 'v';

    exampleFunction(frank, bob);

    return 0;
}

void exampleFunction(int frank, char bob){

    for(int i = 0; i < frank; i ++){
        printf("%c\n", frank);
    }
}
