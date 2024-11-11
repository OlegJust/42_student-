/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opidhorn <opidhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:11:16 by opidhorn          #+#    #+#             */
/*   Updated: 2024/11/05 12:11:19 by opidhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_file(int fd)
{
	size_t	read_bytes;
	char	buffer[1025];

	read_bytes = read(fd, buffer, 1024);
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, 1024);
	}
}
