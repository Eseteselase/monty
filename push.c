#include "monty.h"
/**
 * function_push - add node to the stack
 * @hd: stack head
 * @amount: line_number
 * Return: no return
*/
void function_push(stack_t **hd, unsigned int amount)
{
	int k, i = 0, fg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				fg = 1; }
		if (fg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", amount);
			fclose(bus.file);
			free(bus.content);
			free_stack(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", amount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE); }
	k = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(hd, k);
	else
		addqueue(hd, k);
}
