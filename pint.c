#include "monty.h"
/**
 * s_pint - prints the value at the top of the stack.
 * @head: head pointer.
 * @line_num: line number counter.
 *
 * Return: Nothing
 */
void s_pint(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
