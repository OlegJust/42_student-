/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opidhorn <opidhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:28:04 by opidhorn          #+#    #+#             */
/*   Updated: 2024/11/05 12:10:42 by opidhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	if (!tab || !f)
		return (0);
	i = -1;
	count = 0;
	while (tab[++i])
	{
		if (f(tab[i]) == 1)
			++count;
	}
	return (count);
}
