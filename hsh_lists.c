#include "main.h"

/**
<<<<<<< HEAD
 * add_sepa_node_end - it add a separator  at the end
=======
 * add_sep_node_end - add a separator  at the end
>>>>>>> ddafa3213285b90102ae1ae7f0fd47a0f96a7144
 * of a sepa_list.
 * @head: the head of the linked list.
 * @sepa: the separator found (; | &).
 * Return: it returns address of the head.
 */

sep_list *add_sep_node_end(sep_list **head, char sep)
{
<<<<<<< HEAD
	sepa_list *new, *temp;

	new = malloc(sizeof(sepa_list));
	if (new == NULL)
		return (NULL);
=======
sep_list *new = malloc(sizeof(sep_list));
if (new == NULL)
return (NULL);

new->separator = sep;
new->next = NULL;
>>>>>>> ddafa3213285b90102ae1ae7f0fd47a0f96a7144

	new->separator = sepa;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

/**
<<<<<<< HEAD
 * free_sepa_list - it frees a sepa_list
 * @head: the head of the linked list.
 * Return: it  returns nothing.
=======
 * free_sep_list - frees a sep_list
 * @head: head of the linked list.
 * Return: no return.
>>>>>>> ddafa3213285b90102ae1ae7f0fd47a0f96a7144
 */
void free_sep_list(sep_list **head)
{
<<<<<<< HEAD
	sepa_list *temp;
	sepa_list *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
=======
sep_list *current = head;
while (current != NULL)
{
sep_list *next = current->next;
free(current);
current = next;
}
>>>>>>> ddafa3213285b90102ae1ae7f0fd47a0f96a7144
}


/**
 * add_line_node_end - it adds a command line at the end
 * of a line_list.
 * @head: the head of the linked list.
 * @line: the command line.
 * Return: the address of the head.
 */

line_list *add_line_node_end(line_list **head, char *line)
{
	line_list *new, *temp;

	new = malloc(sizeof(line_list));
	if (new == NULL)
		return (NULL);

	new->line = line;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

/**
 * free_line_list - it frees a line_list
 * @head: the head of the linked list.
 * Return: it return nothing.
 */

void free_line_list(line_list **head)
{
	line_list *temp;
	line_list *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
