#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();

    printf("Hello! This process is running.\n");

    return 0;
}
