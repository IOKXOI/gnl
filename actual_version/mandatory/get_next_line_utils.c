/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:37:38 by sydauria          #+#    #+#             */
/*   Updated: 2022/03/31 07:41:37 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (src > dest && size--)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	while (dest > src && size--)
		*(unsigned char *)(dest + size) = *(unsigned char *)(src + size);
	return (dest);
}

char	*ft_strdup(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (buffer)
	{
		str = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
		if (str)
		{
			while (*(buffer + i))
			{
				*(str + i) = *(buffer + i);
				i++;
			}
			*(str + i) = '\0';
		}
		return (str);
	}
	return (NULL);
}

char	*ft_strndup(char *buffer, int n)
{
	int		i;
	char	*str;

	i = 0;
	if (buffer)
	{
		str = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
		if (!str)
			return (NULL);
		while (*(buffer + i) && i <= n)
		{
			*(str + i) = *(buffer + i);
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_strjoin_and_free(char *line, char *temp)
{
	char	*new_line;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!line)
		return (temp);
	if (!temp)
		return (NULL);
	new_line = malloc(sizeof(char) * (ft_strlen(line) + ft_strlen(temp) + 1));
	if (!new_line)
		return (NULL);
	while (*(line + i))
		*(new_line + (j++)) = *(line + (i++));
	free(line);
	i = 0;
	while (*(temp + i))
		*(new_line + (j++)) = *(temp + (i++));
	free(temp);
	new_line[j] = '\0';
	return (new_line);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (*(str + i))
		i++;
	return (i);
}
