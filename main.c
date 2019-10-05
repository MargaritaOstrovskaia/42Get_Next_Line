#include "get_next_line.h"
#include <stdio.h>

int main()
{
    char  *line;
    int   fd1;
    int   fd2;

    fd1 = open("file1", O_RDONLY);
    fd2 = open("file2", O_RDONLY);

    get_next_line(fd1, &line);
    printf("%s\n", line);
    get_next_line(fd1, &line);
    printf("%s\n", line);

    get_next_line(fd2, &line);
    printf("%s\n", line);
    get_next_line(fd2, &line);
    printf("%s\n", line);

    get_next_line(fd1, &line);
    printf("%s\n", line);

    get_next_line(fd2, &line);
    printf("%s\n", line);

    get_next_line(fd1, &line);
    printf("%s\n", line);

    get_next_line(fd2, &line);
    printf("%s\n", line);

    close(fd1);
    close(fd2);
    return (0);
}