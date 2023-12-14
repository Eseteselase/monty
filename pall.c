#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
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
