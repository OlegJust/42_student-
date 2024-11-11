/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opidhorn <opidhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:40 by opidhorn          #+#    #+#             */
/*   Updated: 2024/11/05 14:59:40 by opidhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	num = 1;
	while (i <= nb)
	{
		num = num * i;
		++i;
	}
	return (num);
}
