#include "monty.h"

/**
 * s_queue - Prints the top
 * @head: Stack head
 * @line_num: Line number
 *
 * Return: No return value
 */
void s_queue(stack_t **head, unsigned int line_num)
{
	(void)head;
	(void)line_num;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail stack
 * @n: New value
 * @head: Head of the stack
 *
 * Return: No return value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (current)
	{
		while (current->next)
			current = current->next;
	}
	if (!current)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		current->next = new_node;
		new_node->prev = current;
	}
}

