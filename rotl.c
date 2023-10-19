#include "monty.h"

/**
 * s_rotl - Rotates the stack to the top
 * @head: Stack head
 * @line_num: Line number (unused)
 *
 * Return: No return value
 */
void s_rotl(stack_t **head, __attribute__((unused)) unsigned int line_num)
{
	stack_t *tmp = *head, *current;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	current = (*head)->next;
	current->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = current;
}
