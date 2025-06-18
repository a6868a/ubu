#include <stdio.h>
#include <unistd.h>

int main()
{
    // char *arg[] = {"ls", "-l", NULL};
    printf("execvp():before\n");
    // execvp(arg[0], arg);
    execlp("ls", "ls", "-l", NULL);
    printf("execvp():after\n");
}
