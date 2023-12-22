#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @amount: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int amount, FILE *file)
{
	instruction_t opst[] = {
				{"push", function_push}, {"pall", function_pall}, {"pint", function_pint},
				{"pop", function_pop},
				{"swap", function_swap},
				{"add", function_add},
				{"nop", function_nop},
				{"sub", function_sub},
				{"div", function_div},
				{"mul", function_mul},
				{"mod", function_mod},
				{"pchar", function_pchar},
				{"pstr", function_pstr},
				{"rotl", function_rotl},
				{"rotr", function_rotr},
				{"queue", function_queue},
				{"stack", function_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && op)
	{
		if (strcmp(op, opst[j].opcode) == 0)
		{	opst[j].f(stack, amount);
			return (0);
		}
		j++;
	}
	if (op && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", amount, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
