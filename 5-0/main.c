#include "island.h"
#include <fcntl.h>
#include <unistd.h>

int				main(int argc, char **argv)
{
	int				fd;
	char			**map;

	while (argc >= 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
			break ;
		map = read_island(fd);
		close(fd);
		if (check_island(map) != 0)
			break ;
		if (count_island(map) > 10)
			break ;
		print_island(map);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}
