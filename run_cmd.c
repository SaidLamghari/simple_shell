#include "shell.h"

int run_cmd(char **cmd, char **av, int cmd_in)
{
    pid_t childproc;
    char *f_path;
    int signal_number;
    int res_proc, exit_status;

    f_path = find_path(cmd[0]);
    if (f_path == NULL)
    {
        displayerr(av[0], cmd[0], cmd_in);
        freestr(cmd);
        return (127);
    }

    childproc = fork();
    if (childproc == -1)
    {
        perror("fork");
        free(f_path);
        freestr(cmd);
        return (-1);
    }
    else if (childproc == 0)
    {
        
        if (execve(f_path, cmd, environ) == -1)
        {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        waitpid(childproc, &res_proc, 0);
        free(f_path);
        freestr(cmd);

        if (WIFEXITED(res_proc))
        {
            exit_status = WEXITSTATUS(res_proc);
            return (exit_status);
        }
        else if (WIFSIGNALED(res_proc))
        {
            signal_number = WTERMSIG(res_proc);
            return (-signal_number);
        }
        else
        {
            return (-1);
        }
    }
    return (0);
}
