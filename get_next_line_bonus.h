#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
# endif

size_t ft_strlen(char *str);
char    *newline_exist(char *str);
char    *ft_strjoin(char *stash, char *buff);
void    *ft_calloc(size_t count, size_t size);
char    *get_next_line(int fd);

#endif