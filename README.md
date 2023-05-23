SIMPLE SHELL
A straightforward UNIX command interpreter developed as part of ALX's low-level programming and algorithm track.

A simple shell, also known as a command-line interpreter or command shell, is a text-based interface that allows users to interact with an operating system by executing commands. It provides a way to run programs, manage files and directories, and perfom various system operations.

Here's a description of the basic features and components typically found in a simple shell:

1. Prompt: The shell displays a prompt, usually a symbol or text, to indicate that it's ready to accept input from the user. It often includes information like the current working directory or the username.

2. Command Input: Users can enter commands by typing them at the prompt. Commands are generally text-based instructions that tell the shell what action to perform, such as running a program or manipulating files.

3. Command Parsing: The shell parses the command entered by the user to determine the executed program or built-in command to execute. It seperates the command and its arguments (if any) based on spaces or other specified delimeters.

4. Execution: After parsing the command, the shell attempts to execute it. For built-in commands, the shell directly performs the associated action. For external programs, the shell searches for the executable file specified directories, such as the PATH variabler, and runs it.

5. I/O Redirection: A shell may support I/O redirection, which allows the user to redirect input from a file or send output to a file instead of the terminal. Common redirection operaters include ">" (output to a file), "<" (input from a file), and ">>" (append output to a file).

6. Pipelines: Shell pipeliness enable the chaining of multiple commands together, where the output of one command becomes the input of the next command. This allows for powerfuk combinations of commands to achieve complex tasks.

7. Environment Variables: The shell maintains a set of environment variables that store information such as system configuration, user preferences, and temporary data. Users can view, set, and modify these variables as needed.

8. Job Control: Many shells offer job control features, allowing users to manage multiple running processes. Users can start background processes, pause/resume foreground processes, and switch between different jobs.

9. Scripting: Shells often support scripting capabilities, allowing users to write shell scripts containing a sequence of commands. These scripts can be executed as programs, automating repetitive tasks and complex operations.

10. Command History: Shells typically provide a command history feature, allowing users to access previously executed commands. This feature enables users to recall and re-excute commands without retyping them.

Overall, a simple shell provides a command-line interface for users to interact with the operating system, execute programs, manipulate files, and perfom various system operations efficiently.

ENVIRONMENT
hsh receives and duplicates the environment of the parent process it was executed in after being invoked. An array of name-value strings describing variables with the format NAME=VALUE makes up this environment.
Some significant environmental factors include:
PWD
The current working directory as set by the cd command.

OLDPWD
The previous working directory as set by the cd command.

HOME
The home directory of the current user and the default directory argument for the cd builtin command.

PATH
A list of directories, seperated by colons, where the shell searches for commands. The current directory is denoted by a null directory name in the path, which can be represented by two consecutive colons, an initial colon, or a trailing colon.

a list of directories, seperated by colons, where the shell searches for commands. The current directory is denoted by a null directory name in the path, which can be represented by two consecytive colons, an initial colon, or a trailing colon.

Builtin Commands
alias
Using an alias ... [NAME[='VALUE']]
controls aliases.
alias: Prints a list of all aliases in the format
NAME='VALUE', one alias per line.
alias NAME [NAME2...]: Prints alias in the format NAME='VALUE', one per line.
NAME='VALUE' alias For each NAME whose VALUE is specified, [...]: defines an alias.
VALUE is specified, [...]: defines an alias.
VALUE is substituted for name's value if it is already an alias.

exit
Use: leave[STATUS]
Leave the shell.
The integer used to leave the shell is the STATUS argument.
The command is regarded as exit 0 in the absence of an argument.

cd
Utilization: cd [DIRECTORY]
changes the process's current directory to DIRECTORY.
In the absence of an argument, the command is read as cd $HOME.
The command is translated as cd $OLDPWD if the parameter - is provided and the pathname of the new working directory is reported to standard output.
The command is parsed as cd $OLDPWD if the parameter -- is provided, but the pathname of the new working directory is not shown.
After a directory change, the environment variables PWD and OLDPWD are modified.

env
Usage: env
Prints the current environment.

unsetenv
Usage: unsetenv [VARIABLE]
Removes an environment variable.
Upon failure, prints a massage to stderr.

setenv
Usage: setenv [VARIABLE][VALUE]
Initializes a new environment varible, or modifies an existing one.
Upon failure, prints a massage to stderr.

AUTHORS
SHARON MZAMA
<Sharonmzama4@gmail.com>
KENNEDY DONKOR
<kcyberh30@gmail.com>
