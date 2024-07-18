#include "monty.h"

/**
 * push - Pushes an element to the stack
 * @stack: Double pointer to the stack
 * @line_cnt: Number of lines
 */
void push(stach_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprint(stderr, "L%d: usage: push integer\n", line_cnt);
		status = EXIT_FAILURE;
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			status = EXIT_FAILURE;
		}
	}
}
