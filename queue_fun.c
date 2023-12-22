#include "monty.h"
/**
 * function_queue - prints the top
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_queue(stack_t **hd, unsigned int amount)
{
	(void)hd;
	(void)amount;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack hd
 * @n: new_value n 
 * @hd: head of the stack
 * Return: no return
*/
void addqueue(stack_t **hd, int n)
{
	stack_t *new_node, *ax;

	ax = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ax->next = new_node;
		new_node->prev = ax;
	}
}
