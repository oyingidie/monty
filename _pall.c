#include "monty.h"

/**
 *  _pall - Prints all values on the stack
 * @stack: Pointer to the stack
 * @line: Line number
 */
void _pall(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	(void) line;

	temp = *stack;
	for (; temp; temp = temp->next)
		printf("%d\n", temp->n);
}
