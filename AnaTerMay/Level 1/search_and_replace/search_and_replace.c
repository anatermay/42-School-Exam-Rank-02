#include <unistd.h>

int main(int argc, char **argv)
{
    char    replace = argv[2][0];
    char    another = argv[3][0];
    int     index;
    int     length[2];

    if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        index = 0;
        while (argv[1][index])
        {
            if (argv[1][index] == replace)
                write(1, &another, 1);
            else
                write(1, &argv[1][index], 1);
            index++;
        }
    }
    write(1, "\n", 1);
    return (0);
}