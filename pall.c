#include "monty.h"

/**
 * pall - Prints all the values on the stack fropm the top
 * @stack: Double pointer to stack
 * @line_cnt: Line number
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
