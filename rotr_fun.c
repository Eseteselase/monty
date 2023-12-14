#include "main.h"
/**
  *function_rotr- rotates the stack to the bottom
  *@hd: stack head
  *@amount: line_number
  *Return: no return
 */
void function_rotr(stack_t **hd, __attribute__((unused)) unsigned int amount)
{
	stack_t *copy;

	copy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *hd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*hd)->prev = copy;
	(*hd) = copy;
}
