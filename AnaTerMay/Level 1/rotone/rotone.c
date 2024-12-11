#include <unistd.h>

int main(int argc, char **argv)
{
    char    current;
    int     index;

    index = 0;
    if (argc == 2)
    {
        while (argv[1][index])
        {
            if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
            {
                if ((argv[1][index] + 1) > 'z')
                    current = (argv[1][index] - 'a' + 1) % 26 + 'a';
                else
                    current = argv[1][index] + 1;
                write(1, &current, 1);
            }
            else if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
            {
                if ((argv[1][index] + 1) > 'Z')
                    current = (argv[1][index] - 'A' + 1) % 26 + 'A';
                else
                    current = argv[1][index] + 1;
                write(1, &current, 1);
            }
            else
                write(1, &argv[1][index], 1);
            index++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
