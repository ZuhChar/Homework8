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

typedef struct node Node;
typedef struct word Word;

struct word
{
    struct word *next, *prev;
    char *string;
};

struct node
{
    struct node *node, *prev;
    char *command;
    Word *arg_list;
    int input, output, error;
    char *in_file, *out_file, *err_file;
};

int main()
{
    char out[4096];
    Node *Head, *current = NULL;
    Word *commands = NULL;
    while (1)
    {
        printf("$> ");
        while (1)
        {
            parse_line(fgets(out, 4096, stdin));
            if (Head == NULL)
            {
                Head = calloc(1, sizeof(Node));
                current = Head;
            }
            printf(":--: %s", out);
            break;
        }
    }
}