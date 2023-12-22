#include "monty.h"
/**
 * function_pall - prints the stack
 * @hd: stack head
 * @amount: no used
 * Return: no return
*/
void function_pall(stack_t **hd, unsigned int amount)
{
	stack_t *s;
	(void)amount;

	s = *hd;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
