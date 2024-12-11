#include <unistd.h>

char	*to_upper(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

int	main(int argc, char **argv)
{
	int	index;
	int	x;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	index = 0;
	while (argv[1][index])
	{
		if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
			x = argv[1][index] - 'a' + 1;
		else if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
			x = argv[1][index] - 'A' + 1;
		else
			x = 1;
		while (x > 0)
		{
			write(1, &argv[1][index], 1);
			x--;
		}
		index++;
	}
	write(1, "\n", 1);
	return (0);
}