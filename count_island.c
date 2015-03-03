/* --- HEADER --- */

#include "count_island.h"


char  **next_line(char *s)
{
	int fd;
	int i;
	char *buf;
	char *lines[1024];

	*lines = ft_strnew(256);
	buf = malloc(1024 + 1);
	fd = open(s, O_RDONLY);
	while (read(fd, buf, 1024 + 1))
	{
		lines[i] = ft_strdup(buf);
		i++;
	}	
	return(*lines);
}

int main(int ac, char **av)
{
	char **lines;

	//*lines = ft_strnew(1);
	if (ac == 2)
	{
		lines = next_line(av[1]);
		//print_result(lines);
	}
	ft_putchar('\n');
	return(0);
}
