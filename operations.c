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


