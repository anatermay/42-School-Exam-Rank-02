#include <unistd.h>

char    *rev_print(char *str)
{
    int     rindex;

    rindex = 0;
    while (str[rindex] != '\0')
        rindex++;
    while (rindex >= 0)
    {
        write(1, &str[rindex], 1);
        rindex--;
    }
    return (str);
}

/*
int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}
*/