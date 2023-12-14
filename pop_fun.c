#include "main.h"
/**
 * function_pop - prints the top
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_pop(stack_t **hd, unsigned int amount)
{
	stack_t *hl;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	hl = *hd;
	*hd = hl->next;
	free(hl);
}
