#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>



int main(void)
{
    int val = 0;

    printf("I am the main process before the fork: %d, val is %d\n", getpid(), val);
    pid_t procId = fork();
    if(procId == 0) //In child
    {
        char *cmd[] = {"./wordify", NULL};
        execvp(cmd[0], cmd);

        printf("I am the child process after the fork: %d, val is %d\n", getpid(), val);
    }
    else //In parent
    {
        printf("I am the parent process after the fork: %d\n", getpid());
    }

}