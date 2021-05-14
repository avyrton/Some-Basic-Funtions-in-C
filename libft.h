#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *destino, int n, size_t z);
void	ft_bzero(void *cad, size_t z);
void	*ft_memcpy(void *destino, const void *rcs, size_t z);
void	*ft_memccpy(void *destino, const void *rcs, int n, size_t z);
void	*ft_memmove(void *destino, const void *rcs, size_t z);
void	*ft_memchr(const void *vt, int n, size_t z);
int		ft_memcmp(const void *cad1, const void *cad2, size_t z);
size_t	ft_strlen(const char *cad);
size_t	ft_strlcpy(char *destino, const char *rcs, size_t z);
size_t	ft_strlcat(char *dest, const char *rcs, size_t z);
char	*ft_strchr(const char *cad, int n);
char	*ft_strrchr(const char *cad, int n);
char	*ft_strnstr(const char *pajar, const char *aguja, size_t z);
int		ft_strncmp(const char *cad1, const char *cad2, size_t z);
int		ft_atoi(const char *cad);
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
int		ft_toupper(int n);
int		ft_tolower(int n);
void	*ft_calloc(size_t cont, size_t z);
char	*ft_strdup(const char *cad);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *cad1, char const *cad2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char r, int fd);
void	ft_putstr_fd(char *cad, int fd);
void	ft_putendl_fd(char *cad, int fd);
void	ft_putnbr_fd(int n, int fd);

int		ft_isspace(int n);
void	ft_putstr(char const *cad);
int		ft_isupper(int n);
int		ft_islower(int n);
void	ft_putchar(char r);
char	*ft_strcpy(char *destino, const char *rcs);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
