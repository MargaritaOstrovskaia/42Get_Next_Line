#include "get_next_line.h"

static void set_fd_data(const int fd, char **files, char *data)
{
    free(files[fd]);
    files[fd] = data;
}

static void	get_line(const int fd, char **files, char **line, int res)
{
    int     len;
    char    *str;

    len = 0;
    while (files[fd][len] != '\n' && files[fd][len] != '\0')
        len++;
    *line = ft_strsub(files[fd], 0, len);
    if (res && files[fd][len + 1])
    {
        str = ft_strdup(&files[fd][len + 1]);
        set_fd_data(fd, files, str);
    }
    else
        return set_fd_data(fd, files, NULL);
}

static void	read_next(const int fd, char **files, char *buff)
{
    char    *str;

    if (!files[fd])
        files[fd] = ft_strnew(1);
    str = ft_strjoin(files[fd], buff);
    free(files[fd]);
    files[fd] = str;
}

int		    get_next_line(const int fd, char **line)
{
    static char	*files[FD_SIZE];
    char		buff[BUFF_SIZE + 1];
    int			res;

    if (fd < 0 || !line)
        return (-1);
    while ((res = read(fd, buff, BUFF_SIZE)) > 0)
    {
        buff[res] = '\0';
        read_next(fd, files, buff);
        if (ft_strchr(buff, '\n'))
            break ;
    }
    if (res < 0)
        return (-1);
    if (res == 0 && (files[fd] == NULL || files[fd] == '\0'))
        return (0);
    get_line(fd, files, line, res);
    return (1);
}
