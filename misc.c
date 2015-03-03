/*----- HEADER -----*/

#include "count_island.h"

char *ft_strnew(int i)
{
	char *s;

	s =  malloc(i);
	while(i)
	{
		s = '\0';
		++s;
	}
	return(s);
}


char *ft_strdup(char *s)
{
	char *ret;
	int  i;

	i = 0;
	ret = malloc(ft_strlen(s) + 1);
	while(s[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return(ret);
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return(i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}
