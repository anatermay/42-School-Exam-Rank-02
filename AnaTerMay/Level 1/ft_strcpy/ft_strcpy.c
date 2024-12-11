#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	index;

	if (!s2)
		return (0);
	index = 0;
	while (s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
}