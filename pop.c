#include "monty.h"

/**
 * s_pop - remove the top element of the stack.
 * @head: head pointer
 * @line_num: line numebr counter
 *
 * Return: Nothing
 */
void s_pop(stack_t **head, unsigned int line_num)
{

	stack_t *current;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	*head = current->next;
	free(current);
}
