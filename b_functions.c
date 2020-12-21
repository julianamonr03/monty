#include "monty.h"

/**
 * push - Function for push an element to the stack.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: void - nothing
 **/

void push(stack_t **head, unsigned int counter)
{
	stack_t *new_n = NULL;
}

/**
 * pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: void - nothing
 **/

void pall(stack_t **head, unsigned int counter __attribute__((unused)))
{
	/* Transfer values to not modify original list */
	stack_t *tmp = *head;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - prints the value at the top of the stack,
 * followed by a new line.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: void - nothing
 **/

void pint(stack_t **head, unsigned int counter)
{
	/* Verify if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * pop - Removes the top element of the stack.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: void - nothing
 **/
void pop(stack_t **head, unsigned int counter)
{
	stack_t *new_list = *head;

	/* Verify if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	new_list = (*head)->next;
	free(*head);
	*head = new_list;
}
