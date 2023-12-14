#include "main.h"
/**
 * function_pint - prints the top
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_pint(stack_t **hd, unsigned int amount)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
