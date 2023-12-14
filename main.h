#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list (stack or queue)
 * @n: int type number
 * @prev: pointer to previous element (stack or queue)
 * @next: pointer to the next element (stack or queue)
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - var. -args, file, line
 * @arg: value to take
 * @file: pointer to file
 * @content: line content inside the file
 * @lifi: flag change from stack to queue and visevers
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - function with its opcode
 * @opcode: opcode
 * @f: function to handle the opcode
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void function_push(stack_t **hd, unsigned int amount);
void function_pall(stack_t **hd, unsigned int amount);
void function_pint(stack_t **hd, unsigned int amount);
int execute(char *content, stack_t **hd, unsigned int amount, FILE *file);
void free_stack(stack_t *hd);
void function_pop(stack_t **hd, unsigned int amount);
void function_swap(stack_t **hd, unsigned int amount);
void function_add(stack_t **hd, unsigned int amount);
void function_nop(stack_t **hd, unsigned int amount);
void function_sub(stack_t **hd, unsigned int amount);
void function_div(stack_t **hd, unsigned int amount);
void function_mul(stack_t **hd, unsigned int amount);
void function_mod(stack_t **hd, unsigned int amount);
void function_pchar(stack_t **hd, unsigned int amount);
void function_pstr(stack_t **hd, unsigned int amount);
void function_rotl(stack_t **hd, unsigned int amount);
void function_rotr(stack_t **hd, __attribute__((unused)) unsigned int amount);
void addnode(stack_t **hd, int n);
void addqueue(stack_t **hd, int n);
void function_queue(stack_t **hd, unsigned int amount);
void function_stack(stack_t **hd, unsigned int amount);
#endif
