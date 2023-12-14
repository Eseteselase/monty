#include "main.h"
/**
 * function_swap - adds the top two elements of the stack.
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_swap(stack_t **hd, unsigned int amount)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	hl = *hd;
	ax = hl->n;
	hl->n = hl->next->n;
	hl->next->n = ax;
}
