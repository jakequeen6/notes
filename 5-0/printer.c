#include "island.h"
#include <unistd.h>

void			print_island(char **map)
{
	const int		len = ft_strlen(*map);

	while (*map != NULL)
	{
		write(1, *map, len);
		write(1, "\n", 1);
		map++;
	}
}
