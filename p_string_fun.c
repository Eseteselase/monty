#include "main.h"
/**
 * function_pstr - prints the string starting at the top of the stack,
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_pstr(stack_t **hd, unsigned int amount)
{
	stack_t *hl;
	(void)amount;

	hl = *hd;
	while (hl)
	{
		if (hl->n > 127 || hl->n <= 0)
		{
			break;
		}
		printf("%c", hl->n);
		hl = hl->next;
	}
	printf("\n");
}
