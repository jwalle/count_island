/* --- HEADER --- */

#include "count_island.h"


void  print_island(char *lines)
{
	//ft_putstr("plop\n");
	ft_putstr(lines);
}
char  *next_line(char *s, char *lines)
{
	int fd;
	int flag;
	int j;
	char *buf;

	flag = 0;
	buf = malloc(1024);
	fd = open(s, O_RDONLY);
	while ((j = read(fd, buf, 10)) > 0)
	{
		buf[j] = '\0';
		if (!flag)
		{
			lines = ft_strdup(buf);
			flag++;
		}
		else
			lines = ft_strjoin(lines, buf);
	}
	return(lines);
}

int main(int ac, char **av)
{
	char *lines;
	int i;
	int j;
	char *array[1024];
	
	i = -1;
	j = 0;
	lines = malloc(1024);
	*array = '\0';
	//*array = ft_strnew(1024);
	if (ac == 2)
	{
		lines = next_line(av[1], lines);
		while (lines[j])
		{
			while(lines[++j] != '\n')
				array[++i] = ft_strdup(lines);
		}
		print_island(lines);
	}
	else
		ft_putchar('\n');
	return(0);
}
