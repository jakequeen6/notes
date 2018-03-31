#ifndef ISLAND_H
# define ISLAND_H
# include <stddef.h>
# define BUFF_SIZE		512
# define MAX_LINE_LEN	1024

int				ft_strlen(const char *str);
void			ft_strcpy(char *dst, const char *src);
void			ft_strlcpy(char *dst, const char *src, int len);
char			*ft_strldup(const char *dst, int len);
void			str_add(char **str, char *add, int len);

char	**read_island(int fd);
int	check_island(char **map);
int	count_island(char **map);
void			print_island(char **map);
#endif
