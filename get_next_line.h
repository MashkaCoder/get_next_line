#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// # define BUFFER_SIZE 2

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

int		get_next_line(int fd, char **line);
char	*ft_strchr(char const *string, int symbol);
char	*ft_strjoin(char *s1, char *s2, char **s3);
size_t	ft_strlen(const char *s);

#endif
