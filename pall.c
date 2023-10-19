#include "monty.h"
/**
 * s_pall - print all value of stack
 *
 * @head: stack head pointer
 * @line_num: unused parameter
 *
 * Return: Nothing
 */
void s_pall(stack_t **head, unsigned int line_num)
{
	stack_t *current = *head;
	(void)line_num;

	if (current == NULL)
		return;

	while (current != NULL)
	{

		printf("%d\n", current->n);
		current = current->next;
	}
}

