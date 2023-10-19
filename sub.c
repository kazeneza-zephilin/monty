#include "monty.h"

/**
 * s_sub - subtracts the top element of the stack from the second top element
 * @head: Stack head
 * @line_num: Line number counter
 *
 * Return: No return value
 */
void s_sub(stack_t **head, unsigned int line_num)
{
	stack_t *current = *head;
	int subtraction, node_count;

	for (node_count = 0; current != NULL; node_count++)
		current = current->next;

	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	subtraction = current->next->n - current->n;
	current->next->n = subtraction;
	*head = current->next;
	free(current);
}

