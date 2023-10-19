#include "monty.h"

/**
 * s_mod - Computes the rest of the division of the second top element of
 * the stack by the top element of the stack.
 * @head: Stack head
 * @line_num: Line number counter
 *
 * Return: No return value
 */
void s_mod(stack_t **head, unsigned int line_num)
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
		fprintf(stderr, "L%d: Can't mod, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: Division by zero\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = current->next->n % current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
