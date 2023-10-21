#include "monty.h"

/**
 * s_push - pushes an element to the stack.
 * @head: head pointer.
 * @line_num: number line counter.
 *
 * Return:Nothing
 */
void s_push(stack_t **head, unsigned int line_num)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}

	}
	else
	{fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);

	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);

}
