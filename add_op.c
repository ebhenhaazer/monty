#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int summ;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	summ = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = summ;

}
