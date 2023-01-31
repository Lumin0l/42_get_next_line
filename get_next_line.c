/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V1_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:19:05 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/01/25 15:19:05 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* For main */
#include "get_next_line.h"


/*
Prototipos:
ssize_t read(int fd, void *buf, size_t count);
*/

/*
Quiero:
	- Una función que lea todo y lo almacene en un buffer
	- Una función que recorra este buffer y pare en '\n', copie todo hasta ese punto con '\0' al final y continue desde ese punto.
*/

char	*ft_read_all(int fd)
{
	char			*buf[BUFFER_SIZE];
	static char		*static_buf;
	unsigned int	i;
	
	static_buf = buf;
	read(fd, buf, BUFFER_SIZE);
	while (static_buf[i] != '\0')
	{
		i++;
		if // ni idea de como seguir
		
	}




}
char *get_next_line(int fd)
{
	char *text;

	text = ft_read_all(fd);
	
	
}


int	main(void)
{
	// Declaramos variables
	int	fd;
	char *line;


	// El archivo se abre desde main
	// Le damos el valor a file descriptor cuando abra el archivo
	fd = open("archive.txt", O_RDONLY);

	// Control en caso de error
	if (fd < 0)
		return (-1);
	
	// Si correcto, actua gnl
	line = get_next_line(fd);
	printf("%s\n", line);


	// Cierre de el archivo
	close(fd);
}