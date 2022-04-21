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
#include <stdlib.h>
#include "wyscanner.h"


struct word
{
    struct word *next, *prev;
    char *string;
};

typedef struct word Word;

struct node
{
    struct node *node, *prev;
    char *command;
    Word *arg_list;
    int input, output, error;
    char *in_file, *out_file, *err_file;
};

typedef struct node Node;

int rtn = 0;
char prtn;
char buff[4096];

void addToList(char* input, Node* list){
    list->arg_list->next->string = input;
}

int main()
{
    while (1)
    {
        printf("$> ");
        prtn = fgets(buff, 4096, stdin);
        Node *Head, *current = NULL;
        Word *commands = NULL;
        rtn = parse_line(buff);
        while (rtn != EOL)
        {
            switch (rtn)
            {
            case WORD:
                if (Head == NULL) {
                        Head = calloc(1, sizeof(Node));
                        current = Head;
                    }
                if(current->command == NULL){
                    current->command = strtouq(lexeme);
                }else{
                    addToList(lexeme, current);
                }
                break;
            }
        }
    }
}