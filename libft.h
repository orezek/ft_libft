/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:18:02 by orezek            #+#    #+#             */
/*   Updated: 2023/11/21 22:02:40 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <ctype.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <errno.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// part 1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *block, int c, size_t size);
void	ft_bzero(void *block, size_t size);
// redo the restrit qualifier
void	*ft_memcpy(void *to, const void *from, size_t size);
void	*ft_memmove(void *to, const void *from, size_t size);
// redo the restrit qualifier
size_t	ft_strlcpy(char *to, const char *from, size_t size);
// redo the restrit qualifier
size_t	ft_strlcat(char *to, const char *from, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
void	*ft_memchr(const void *block, int c, size_t size);
int		ft_memcmp(const void *a1, const void *a2, size_t size);
// strnstr - missing prototype in libc not part of ANSI C standard!
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *string);
// Use malloc()
void	*ft_calloc(size_t count, size_t eltsize);
char	*ft_strdup(const char *s);
// part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
// bonus
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// getnextline part
char	*ft_get_next_line(int fd);
int		ft_gnl_strlen(char *str);
char	*ft_gnl_strjoin(char *s1, char *s2);
char	*ft_extract_line_and_movebytes(char *buf);
int		ft_has_newline(char *str);
int		ft_initialize_buffer(int fd, char **buf);
char	*ft_gnl_strncpy(char *dest, char *src, int n);
void	*ft_gnl_memmove(void *to, const void *from, size_t size);
int		ft_find_newline_position(char *str);
// ft_printf part
int		ft_prt_printf(const char *format, ...);
char	*ft_prt_convert_number_to_hex(uint64_t bin_n);
char	*ft_prt_convert_pointer_to_hex(uint64_t bin_n);
int		ft_prt_hexlen(uint64_t bin_n);
char	*ft_prt_itoa(int n);
int		ft_prt_printf_short(char *format, int *ptr_chars_printed, va_list *args);
void	ft_prt_putchar(char c, int *ptr_chars_printed);
void	ft_prt_puthex_upper(unsigned int ptr_address, int *ptr_chars_printed);
void	ft_prt_puthex(unsigned int ptr_address, int *ptr_chars_printed);
void	ft_prt_putnbr_unsigned(unsigned int n, int *ptr_chars_printed);
void	ft_prt_putnbr(int n, int *ptr_chars_printed);
void	ft_prt_putptr(void *ptr_address, int *ptr_chars_printed);
void	ft_prt_putstr_upper(char *str, int *ptr_chars_printed);
void	ft_prt_putstr(char *str, int *ptr_chars_printed);
char	*ft_prt_strcpy(char *des, char *src);
char	*ft_prt_strdup(char *src);
int		ft_prt_strlen(char *str);
int		ft_prt_toupper(int c);
char	*ft_prt_unsigned_itoa(int n);
#endif
