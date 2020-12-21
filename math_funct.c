#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: Void - Nothing
 **/
void add(stack_t **head, unsigned int counter)
{
	int add_elem;

	/* Verify If the stack contains less than two elements */
    if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: line_number>: can't add, stack too short\n",counter);
		exit(EXIT_FAILURE);
	}

	add_elem = (*head)->n;
	add_elem += (*head)->next->n;
	pop(head, counter);
	(*head)->next->n = add_elem;
}

/**
 * sub - subtracts the top element of the stack from the second
 * top element of the stack.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: Void - Nothing
 **/

void sub(stack_t **head, unsigned int counter)
{
	/* Verify If the stack contains less than two elements */
    if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: line_number>: can't sub, stack too short\n",counter);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n -= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}

/**
 * mul -  multiplies the second top element of the stack with
 * the top element of the stack.
 * @head: Head of the list
 * @counter: Number of the line
 * Return: Void - Nothing
 **/

void mul(stack_t **head, unsigned int counter)
{
	/* Verify If the stack contains less than two elements */
    if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: line_number>: can't mul, stack too short\n",counter);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n *= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
