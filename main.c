#include "shell.h"
/*
main - main
@ac : count argc
@av : argv
Return : 0
*/

int main(int ac, char **av)
{
    char *inpstr = NULL;
    char **cmd = NULL;
    int res_proc = 0, cmd_in = 0;
    (void) ac;
    
    do
    {
        inpstr = inputline();
     
        if (inpstr == NULL)
        {
            isatty(STDIN_FILENO) ? _putout("\n", 1) : 0;
        return (res_proc);
        }
        
        cmd_in++;
        cmd = str_toke(inpstr);

        if (cmd != NULL)
        {
            switch (cmdbuilt(cmd[0])) 
            {
                case 0:
                    res_proc = run_cmd(cmd, av, cmd_in);
                    break;
                case 1:
                    excutincmd(cmd, av, &res_proc, cmd_in);
                    break;
            }  
        }
    } while (1);
}
