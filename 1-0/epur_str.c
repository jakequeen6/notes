#include <unistd.h>

int 			main(int argc, char **argv)
{
	int			i;
	char 		*arg;

	if(argc == 2)
	{
		i = -1;
		arg = argv[1];
		while (*arg != '\0')
		{
			while (*arg == ' ' || *arg == '\t')
				arg++;
			if (i != -1 && *arg !=
