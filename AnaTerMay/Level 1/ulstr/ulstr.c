#include <unistd.h>

int main(int argc, char **argv)
{
    char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *lower = "abcdefghijklmnopqrstuvwxyz";
    int index = 0;

    if (argc == 2)
    {
        while (argv[1][index])
        {
            if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
                write(1, &lower[argv[1][index] - 'A'], 1);
            else if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
                write(1, &upper[argv[1][index] - 'a'], 1);
            else
                write(1, &argv[1][index], 1);
            index++;
        }
    }
    write(1, "\n", 1);
    return (0);
}