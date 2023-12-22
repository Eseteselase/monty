#include "monty.h"
/**
 * addnode - add_node to the head stack
 * @hd: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **hd, int n)
{

	stack_t *new_node, *ax;

	ax = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = new_node;
	new_node->n = n;
	new_node->next = *hd;
	new_node->prev = NULL;
	*hd = new_node;
}
