#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: pointer to the stack head
 * @counter: Line number indicating the current line
 * Return: No return value
 */

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	if (!current)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (current->n > 127 || current->n < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", current->n);
}
