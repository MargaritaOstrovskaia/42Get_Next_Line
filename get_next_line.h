#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4
# define FD_SIZE 4096

# include "libft/libft.h"
# include <fcntl.h>

int	get_next_line(const int fd, char **line);

#endif