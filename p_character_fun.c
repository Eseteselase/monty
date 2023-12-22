#include "monty.h"
/**
 * function_pchar - prints the char at the top of the stack,
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_pchar(stack_t **hd, unsigned int amount)
{
	stack_t *hl;

	hl = *hd;
	if (!hl)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (hl->n > 127 || hl->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hl->n);
}
