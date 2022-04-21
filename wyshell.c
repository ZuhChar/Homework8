//
// wyshell.c
// Author: Zachary Crimmel
// Date: Apr 20, 2022
//
// COSC 3750, Homework 8
//
// This is a shell program that was written in c
// Collaborated with Ian Moon on this Homework
//

#include <stdio.h>
#include "wyscanner.c"

int main()
{
    char input[4096];
    while (1)
    {
        printf("$> ");
        const char word = fgets(input, 4096, stdin);
        while (1)
        {
            parse_line(word);
            if (user_buffer == " ")
            {
                printf("\n");
            }
            else if (user_buffer == ">")
            {
                printf(">\n");
            }
        }
    }
}