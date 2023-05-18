#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>

#define BUFSIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\r\n\a"


/* It Points to an array of pointers to strings called the "environment" */
extern char **environ;


/**
 * struct data - the struct that contains all relevant data on runtime
 * @av: argument vector
 * @input: the command line written by the user
 * @args: the tokens of the command line
 * @status: the last status of the shell
 * @counter: the lines counter
 * @_environ: the environment variable
 * @pid: the process ID of the shell
 */
typedef struct data
{
	char **av;
	char *input;
	char **args;
	int status;
	int counter;
	char **_environ;
	char *pid;
} data_shell;

/**
 * struct sepa_list_s - the single linked list
 * @separator: ; | &
 * @next: next node
 * Description: the single linked list to store separators
 */
typedef struct sepa_list_s
{
	char separator;
	struct sepa_list_s *next;
} sepa_list;

/**
 * struct line_list_s - single linked list
 * @line: command line
 * @next: next node
 * Description: single linked list to store command lines
 */
typedef struct line_list_s
{
	char *line;
	struct line_list_s *next;
} line_list;

/**
 * struct builtin_s - the Builtin struct for command args.
 * @name:  name of the command builtin i.e cd, exit, env
 * @f: the data type pointer function.
 */
typedef struct builtin_s
{
	char *name;
	int (*f)(data_shell *datash);
} builtin_t;


/**
 * struct r_var_list - it is a single linked list
 * @len_var: length of variable
 * @val: value of variable
 * @len_val: length of value
 * @next: the next node
 * Description: the single linked list to store variables
 */
typedef struct r_var_list
{
	int len_var;
	char *val;
	int len_val;
	struct r_var_list *next;
} r_var;


/* hsh_lists.c  */
sepa_list *add_sepa_node_end(sepa_list **head, char sepa);
void free_sepa_list(sepa_list *head);
line_list *add_line_end(line_list **head, char *line);
void free_line_list(line_list *head);

/* hsh_lists2.c */
r_var *add_rvar_node(r_var **head, int lvar, char *var, int lval);
void free_rvar_list(r_var *head);

/* memory.c */
void _memcpy(void *newptr, const void *ptr, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **_reallocdp(char **ptr, unsigned int old_size, unsigned int new_size);

/* shell_loop.c */
char *without_comment(char *in);
void shell_loop(data_shell *datash);

/* read_line.c */
char *read_line(int *i_eof);

/* exec_line */
int exec_line(data_shell *datash);

/* get_sigint.c */
void get_sigint(int sig);

/* hsh_str.c */
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);

/* hsh_str3.c */
void rev_string(char *s);
#endif
