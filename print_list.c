#include <stdio.h>
#include "sort.h"

/**
 * print_list - Printing  list of integers
 *
 * @list: List to print
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
