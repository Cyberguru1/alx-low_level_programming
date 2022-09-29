#include "lists.h"
/**
 * print_dlistint - a function that prints a double linked
 * list
 * @h: input header
 * Return:size of dlinkedlist and prints content
 */

size_t print_dlistint(const dlistint_t *h){
	size_t n = 0;

	while (h != NULL){
		printf("%d\n",h->n);
		n++;
		h = h->next;
	}

	return (n);
}
