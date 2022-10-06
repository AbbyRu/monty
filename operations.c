#include "monty.h"

/**
 * op_push - add new node at beginning of stack
 * @stack: double pointer to the first element
 * @n: integer
 * Return: address of new element of NULL if it fails
 */
stack_t *op_push(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;

	return (new);
}

/**
 * op_pall - prints all elements of a stack
 *
 * @stack: pointer to the first element of the stack
 *
 * Return: void
 */
void op_pall(const stack_t *stack)
{
	if (stack == NULL)
		return;

	while (stack)
	{
		printf("%d\n",stack->n);
		stack = stack->next;
	}
}
