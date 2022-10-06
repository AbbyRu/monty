#include "monty.h"

/**
 * free_stack - frees a stack
 *
 * @stack: pointer to the first element of the stack
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *remove;

	if (stack == NULL)
		return;
	while (current != NULL)
	{
		remove = current;
		current = current->next;
		free(remove);
	}
	free(current);
}
