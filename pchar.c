#include "monty.h"

/**
 * s_pchar - Prints the character at the top of the stack,
 * followed by a new line
 * @head: Stack head
 * @line_num: Line number counter
 *
 * Return: No return value
 */
void s_pchar(stack_t **head, unsigned int line_num)
{
	stack_t *current;

	current = *head;
	if (!current)
	{
		fprintf(stderr, "L%d: Can't pchar, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (current->n > 127 || current->n < 0)
	{
		fprintf(stderr, "L%d: Can't pchar, value out of range\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", current->n);
}
