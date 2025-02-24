#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct global_buff - global structure
* @key: identifier
* @stream: actual data or buffer content
* @f: pointer to a file
*/
typedef struct global_buff
{
	char *key;
	char *stream;
	FILE *f;
} gBuff;

extern gBuff b;

void _push(stack_t **stack, unsigned int line);
void _pall(stack_t **stack, unsigned int line);
void _pint(stack_t **stack, unsigned int line);
void _pop(stack_t **stack, unsigned int line);
void _swap(stack_t **stack, unsigned int line);
void _add(stack_t **stack, unsigned int line);
void _nop(stack_t **stack, unsigned int line);
void _sub(stack_t **stack, unsigned int line);
void _div(stack_t **stack, unsigned int line);
void _mul(stack_t **stack, unsigned int line);
void _mod(stack_t **stack, unsigned int line);
void _pchar(stack_t **stack, unsigned int line);
void _pstr(stack_t **stack, unsigned int line);
void _rotl(stack_t **stack, unsigned int line);
void _rotr(stack_t **stack, unsigned int line);

void readFile(char *file);
void parseFile(char *code, stack_t **stack, unsigned int line);
int checkFile(char *file);
void free_all(stack_t *stack);
void getop(stack_t **stack, unsigned int counter, char *code);

#endif
