#include "monty.h"
/**
 * function_rotl- rotates the stack to the top
 * @hd: stack head
 * @amount: line_number
 * Return: no return
 */
void function_rotl(stack_t **hd,  __attribute__((unused)) unsigned int amount)
{
	stack_t *tmp = *hd, *ax;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	ax = (*hd)->next;
	ax->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tmp;
	(*hd) = ax;
}
