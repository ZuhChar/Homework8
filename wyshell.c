#include <stdio.h>
#include "wyscanner.h"

int main(){
    char input = "";
    while(1){
        printf("$> ");
        parse_line(fgets(input, 4096, stdin));
    }
}