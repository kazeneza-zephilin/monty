#include "monty.h"

/**
 * s_swap - swaps the top two elements of the stack
 * @head: Pointer to the head of the stack
 * @line_num: Line number counter
 *
 * Return: No return value
 */
void s_swap(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;
	int temp_value;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (bus.lifi == 0)
	{
		temp_value = temp->n;
		temp->n = temp->next->n;
		temp->next->n = temp_value;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp_value = temp->n;
		temp->n = temp->prev->n;
		temp->prev->n = temp_value;
	}
}
