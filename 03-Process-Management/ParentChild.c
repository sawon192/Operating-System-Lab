#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;

    pid = fork();

    if(pid == 0)
    {
        printf("This is Child Process.\n");
        printf("Child PID = %d\n", getpid());
    }
    else
    {
        printf("This is Parent Process.\n");
        printf("Parent PID = %d\n", getpid());
    }

    return 0;
}
