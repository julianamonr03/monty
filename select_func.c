#include "monty.h"
/**
 * select_func - Select function for needing
 * @head: Head of the list
 * @token: Parameters for entry
 * @counter: Number of the line
 *
 * Return: Void - Nothing
 **/
void select_func(stack_t **head, char *token, unsigned int counter)
{
    instruction_t selector[] = {
        {"pall", pall},
        {"push", push},
        {"pint", pint},
        {"swap", swap},
		{"add", add},
		{"nop", nop},
		{"pop", pop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
        {NULL, NULL}
    };

    int travel = 0;

    while (travel < 10)
    {
        if (strcmp(selector[travel].opcode, token) == 0)
        {
            selector[travel].f(head, counter);
            return;
        }
        travel++;
    }
}