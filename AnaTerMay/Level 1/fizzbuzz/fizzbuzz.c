#include <unistd.h>

void	ft_itoa(int nbr)
{
	char	*str;
	char	number;

	str = "0123456789";
	if (nbr > 9)
		ft_itoa(nbr / 10);
	number = nbr % 10 + 48;
	write(1, &number, 1);
}

int	main(void)
{
	int	index;

	index = 1;
	while (index <= 100)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			if (index % 3 == 0 && index % 5 != 0)
				write(1, "fizz", 4);
			if (index % 3 != 0 && index % 5 == 0)
				write(1, "buzz", 4);
			if (index % 3 == 0 && index % 5 == 0)
				write(1, "fizzbuzz", 6);
			index++;
		}
		else
		{
			ft_itoa(index);
			index++;
		}
		write(1, "\n", 1);
	}
}