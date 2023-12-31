#include "monty.h"
/**
 * function_div - divides the top two elements of the stack.
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_div(stack_t **hd, unsigned int amount)
{
	stack_t *hl;
	int ln = 0, ax;

	hl = *hd;
	while (hl)
	{
		hl = hl->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	hl = *hd;
	if (hl->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	ax = hl->next->n / hl->n;
	hl->next->n = ax;
	*hd = hl->next;
	free(hl);
}
