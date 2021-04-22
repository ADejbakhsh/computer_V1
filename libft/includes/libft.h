/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:35:20 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/18 18:27:13 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <errno.h>
# include <string.h>

void				ft_putin(int fmt, ...);
char				**argv_without_option(int argc, char **argv);
char				**argv_to_tab(int argc, char **argv, int skip);
int					ft_str_contain_only(char *str, char *s2);
int					ft_strcspn(char const *s, char const *charset);
char				*ft_cut_before_last_cara(char *str, char cara);
char				**ft_sort_argv(char **argv);
char				**ft_sort_rev_argv(char **argv);
int					ft_atoi(const char *nptr);
int					ft_int_tab(int tab[], int size);
char				*ft_itoa(int n);
void				ft_putendl(char const *s);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *src);
unsigned long		ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
