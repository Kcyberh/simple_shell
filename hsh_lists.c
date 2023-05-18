#include "main.h"

/**
 * add_sepa_node_end - add a separator  at the end
 * of a sepa_list.
 * @head: head of the linked list.
 * @sepa: separator found (; | &).
 * Return: address of the head.
 */

sepa_list *add_sepa_node_end(sepa_list **head, char sepa)
{
sepa_list *new = malloc(sizeof(sepa_list));
if (new == NULL)
return (NULL);

new->separator = sepa;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
sepa_list *current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
}

return (*head);
}

/**
 * free_sepa_list - frees a sepa_list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_sepa_list(sepa_list *head)
{
sepa_list *current = head;
while (current != NULL)
{
sepa_list *next = current->next;
free(current);
current = next;
}
}


/**
 * add_line_node_end - adds a command line at the end
 * of a line_list.
 * @head: head of the linked list.
 * @line: command line.
 * Return: address of the head.
 */

line_list *add_line_node_end(line_list **head, char *line)
{
line_list *new = malloc(sizeof(line_list));
if (new == NULL)
return (NULL);

new->line = line;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
line_list *current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
}

return (*head);
}

/**
 * free_line_list - frees a line_list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_line_list(line_list *head)
{
line_list *current = head;
while (current != NULL)
{
line_list *next = current->next;
free(current->line);
free(current);
current = next;
}
}
