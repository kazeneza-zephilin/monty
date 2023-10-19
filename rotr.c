#include "monty.h"

/**
 * s_rotr - Rotates the stack to the bottom
 * @head: Stack head
 * @line_num: Line number
 *
 * Return: No return value
 */
void s_rotr(stack_t **head, unsigned int line_num)
{
	stack_t *copy;

	(void)line_num;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}

