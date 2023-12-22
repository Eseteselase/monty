#include "monty.h"
/**
  *function_sub- sustration
  *@hd: stack head
  *@amount: line_number
  *Return: no return
 */
void function_sub(stack_t **hd, unsigned int amount)
{
	stack_t *ax;
	int ss, nodes;

	ax = *hd;
	for (nodes = 0; ax != NULL; nodes++)
		ax = ax->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	ax = *hd;
	ss = ax->next->n - ax->n;
	ax->next->n = ss;
	*hd = ax->next;
	free(ax);
}
