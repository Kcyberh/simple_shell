#include "main.h"

/**
 * add_sep_node_end - add a separator  at the end
 * of a sepa_list.
 * @head: head of the linked list.
 * @sepa: separator found (; | &).
 * Return: address of the head.
 */

sep_list *add_sep_node_end(sep_list **head, char sep)
{
sep_list *new = malloc(sizeof(sep_list));
if (new == NULL)
return (NULL);

new->separator = sep;
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
 * free_sep_list - frees a sep_list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_sep_list(sep_list **head)
{
sep_list *current = head;
while (current != NULL)
{
sep_list *next = current->next;
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

void free_line_list(line_list **head)
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
