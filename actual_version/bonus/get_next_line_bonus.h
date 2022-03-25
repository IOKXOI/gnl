/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:18:23 by sydauria          #+#    #+#             */
/*   Updated: 2022/03/25 14:02:40 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define LIMIT_FD 1023 // index maximal de FD 
# define FD_LIMIT 1025 // nombre d'index a creer dans le tableau
# define STR_TO_RETURN 1024 //index de l4emplacement de ma str a return dans le tableau


# include <stdlib.h>
# include <unistd.h>

void	ft_memmove(char *dest, char *src);
char	*free_this(char **ptr);
void	*free_all(char **remainder);
char	*ft_strndup(char *buffer, int n);
char	*ft_strjoin(char *s1, char *s2);
char	*check_read(char **index, int fd, int nb);
char	*extract_str(char **index, char *buffer, int fd, int *status);
char	*save_buffer(char *buffer, int *status);
char	*get_next_line(int fd);
size_t	ft_strlen(char *str);

#endif