#include "monty.h"

/**
 * s_pstr - Prints the string starting at the top of the stack.
 * @head: Stack head
 * @line_num: line number counter
 *
 * Return: No return value
 */
void s_pstr(stack_t **head, unsigned int line_num)
{
	stack_t *current;
	(void)line_num;

	current = *head;
	while (current)
	{
		if (current->n > 127 || current->n <= 0)
		{
			break;
		}
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
