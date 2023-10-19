#include "monty.h"

/**
 * s_add - adds the top two elements of the stack
 * @head: pointer to the head of stack
 * @line_num: number line counter
 *
 * Return: return no value
 */
void s_add(stack_t **head, unsigned int line_num)
{
	stack_t *current = *head;
	int len = 0;

	while (current)
	{
		current = current->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	current->next->n += current->n;
	*head = current->next;
	free(current);
}

