#include "lists.h"
/**
 * print_dlistint - a function that prints a double linked
 * list
 * @h: input header
 * Return:size of dlinkedlist and prints content
 */

size_t print_dlistint(const dlistint_t *h){
	const dlistint_t *temp = NULL;
	size_t n = 0;

	temp = h;
	while (temp != NULL){
		printf("%d\n",temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}
