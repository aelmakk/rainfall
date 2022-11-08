#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int value;
    char *bin_sh;
    value = atoi(argv[1]);
    if (value != 423)
    {
        bin_sh = strdup("/bin/sh");
        0;
        getegid();
        geteuid();
        setresgid();
        setresuid();
        execv("/bin/sh", bin_sh);
    }
    else
        fwrite("No !\n", 0x1, 0x5, stderr);
    return (0);
}