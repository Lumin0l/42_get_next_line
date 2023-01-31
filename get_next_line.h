/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:59 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/01/25 15:18:59 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* For main */
#include <fcntl.h>
#include <stdio.h>
/* For gnl */
#include <unistd.h>
#include <stdlib.h>

char 	*get_next_line(int fd);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);