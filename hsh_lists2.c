#include "main.h"

/**
 * add_rvar_node - adds a variable at the end of a r_var list.
 * @head: the head of  linked list.
 * @lvar: the length of  variable.
 * @val: the value of  variable.
 * @lval: the length of value.
 * Return: the address of the head.
 */

r_var *add_rvar_node(r_var **head, int lvar, char *val, int lval)
{
r_var *new = malloc(sizeof(r_var));
if (new == NULL)
return (NULL);

new->len_var = lvar;
new->val = val;
new->len_val = lval;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
r_var *current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
}

return (*head);
}


/**
 * free_rvar_list - it  frees a r_var list
 * @head: the head of linked list.
 * Return: it returns nothing
 */

void free_rvar_list(r_var *head)
{
r_var *current = head;
while (current != NULL)
{
r_var *next = current->next;
free(current->val);
free(current);
current = next;
}
}
