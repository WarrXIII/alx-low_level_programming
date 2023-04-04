#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h) {
    size_t size = 0;
    for (; h != NULL; h = h->next) {
        printf("%d\n", h->n);
        size++;
    }
    return size;
}
