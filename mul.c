#include "monty.h"

/**
 * s_mul - Multiplies the top two elements of the stack.
 * @head: Stack head pointer
 * @line_num: Line number counter
 *
 * Return: No return value
 */
void s_mul(stack_t **head, unsigned int line_num)
{
	stack_t *current = *head;
	int length = 0, result;

	while (current)
	{
		current = current->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	result = current->next->n * current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}

