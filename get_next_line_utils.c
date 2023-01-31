/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V1_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:54 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/01/31 17:56:08 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s) * sizeof(char) + BUFFER_SIZE);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memcpy(ptr, s, ft_strlen(s) + 1);
	return (ptr);
}