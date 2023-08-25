#include "monty.h"
/**
 * add - adds the first two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, au;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	au = h->n + h->next->n;
	h->next->n = au;
	*head = h->next;
	free(h);
}
