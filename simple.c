#include "shell.h"

/**
 * shl_read_line - read in a single line of input
 *
 * Return: void
 */
char *shl_read_line(void)
{
        size_t n = 0;
        ssize_t nread;
        char *line = NULL;

        if (isatty(STDIN_FILENO))
                write(STDOUT_FILENO, "$ ", 2);
        nread = getline(&line, &n, stdin);
        if (nread == -1) /* check for EOF*/
        {
                free(line);
                return (NULL);
        }


        return (line);
}
#include "shell.h"
char **tokenize_string(char *line)
{
        char *token = NULL, *cmd_cpy = NULL;
        int counter = 0, i = 0;
        char ** cmd = NULL;

        if (!line)
                return (NULL);
        cmd_cpy = _strdup(line);
        token = strtok(cmd_cpy, delimiter);
        if (token == NULL)
        {
                free(line);
                free(cmd_cpy);
                return (NULL);
        }
        while (token != NULL)
        {
                counter++;
                token = strtok(NULL, delimiter);
        }
        free(cmd_cpy), cmd_cpy = NULL;

        cmd = malloc(sizeof(char *) * (counter +1));
        if (!cmd)
        {
                free(line), line = NULL;
                return (NULL);
        }
        token = strtok(line, delimiter);
        while (token)
        {
                cmd[i] = _strdup(token);
                token = strtok(NULL, delimiter);
                i++;
        }free(line);
        cmd[i] = NULL;
        return (cmd);
#include "shell.h"

/**
 * own_getenv - searches for environment variable
 * @var_name: name of environment variable
 * Return: value of the environment variable, else NULL
 */
char *own_getenv(char *var_name)
{
        char *env_value, *copy,*log, *env;
        int i;

        for (i = 0; environ[i] != NULL; i++)
        {
                copy = _strdup(environ[i]);
                log = strtok(copy, "=");
                if (_strcmp(log, var_name) == 0)
                {
                        env_value = strtok(NULL, "\n");
                        env = _strdup(env_value);
                        free(copy);
                        return (env);
                }
                free(copy);
        }
        return (NULL);
}
#include "shell.h"

/*
 * _find_path - function that seaches for PATH
 * @cmd: the command to search in the path
 * Return: pointer to path
 */
char *_find_path(char *cmd)
{
        char *file_path, *path, *path_dir;
        int j;
        struct stat buf;

        path = own_getenv("PATH");
        if (!path)
                return (NULL);
        if (!path)
                return (NULL);
        path_dir = strtok(path, ":");
        for (j = 0; cmd[j]; j++)
        {
                if (cmd[j] == '/')
                {
                        if (stat(cmd, &buf) == 0) /*check if command is path */
                                return (_strdup(cmd));
                        return (NULL);
                }
        }

        while (path_dir != NULL)
        {
                file_path = malloc(_strlen(path_dir) + _strlen(cmd) + 2);
                if (file_path) /* build path for the whole command */
                {
                        _strcpy(file_path, path_dir);
                        _strcat(file_path, "/");
                        _strcat(file_path, cmd);
                        _strcat(file_path, "\0");
                        if (stat(file_path, &buf) == 0) /* check if the file path exist */
                        {
                                free(path);
                                return (file_path);
                        }
                        free(file_path);

                        path_dir = strtok(NULL, ":");
                }

        }
        free(path);
        return (NULL);
}
~#include "shell.h"

/**
 * main - entry point
 * @ac: represents argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int ac, char **argv)
{
        char **cmd = NULL;
        char *line = NULL;
        int status = 0, index = 0;
        (void) ac; /* void variable*/
        (void) argv;

        while (1)
        {
                line = shl_read_line();
                if (line == NULL) /* end of file (ctr + D) */
                {
                        if (isatty(STDIN_FILENO))
                                write(STDOUT_FILENO, "\n", 1);
                        return (status);
                }
                index++;

                cmd = tokenize_string(line);
                if (cmd == NULL)
                        continue;

                status = shl_launch(cmd, argv, index);
        }
}
