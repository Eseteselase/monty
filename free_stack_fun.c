#include "monty.h"
/**
* free_stack - free stack a doubly linked list
* @hd: head of the stack
*/
void free_stack(stack_t *hd)
{
	stack_t *ax;

	ax = hd;
	while (hd)
	{
		ax = hd->next;
		free(hd);
		hd = ax;
	}
}
