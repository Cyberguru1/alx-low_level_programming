#include "lists.h"
/**
 * dlistint_len - a function that prints a double linked
 * list
 * @h: input header
 * Return:size of dlinkedlist
 */

size_t dlistint_len(const dlistint_t *h){
	size_t n = 0;

	while (h != NULL){
		n++;
		h = h->next;
	}

	return (n);
}
