/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opidhorn <opidhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:03:26 by opidhorn          #+#    #+#             */
/*   Updated: 2024/11/11 13:54:43 by opidhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

// ptr = (unsigned char *)b;  // Cast b to an unsigned char pointer
// ptr[i] = (unsigned char)c; // Assign c as an unsigned char to each byte

//    char str[] = "Welcome to Tutorialspoint"; => Welcome to Tutorialspoint
//    puts(str);

//    memset(str, '#', 7); => ####### to Tutorialspoint
//    puts(str);