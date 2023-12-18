#include "sort.h"

/**
 * insertion_sort_list - Entry point
 * @list: Double pointer to the head of the linked list.
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *previous, *tmp;
int n;

if (!list || !*list || !(*list)->next)
return;

previous = *list;
current = previous->next;

while (current)
{
n = current->n;
tmp = current->next;
while (previous && n < previous->n)
{
 /* Adjust pointers to insert the current node in the correct position */
if (previous->prev)
previous->prev->next = current;

current->prev = previous->prev;
previous->next = current->next;
previous->prev = current;
if (current->next)
current->next->prev = previous;

current->next = previous;
previous = current->prev;
if (!previous)
*list = current;
/* Print the current state of the list after each insertion */
print_list(*list);
}

current = tmp;

if (!current)
break;

previous = current->prev;
}
}
