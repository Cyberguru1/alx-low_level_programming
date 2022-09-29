#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    dlistint_t *new2 = (dlistint_t *)malloc(sizeof(dlistint_t));
    new2->n = 4;
    new2->next = head;
    head->prev = new2;
    new2->prev = NULL;
    head = new2;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    free(new2);  

    return (EXIT_SUCCESS);
}