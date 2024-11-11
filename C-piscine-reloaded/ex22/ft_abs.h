/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opidhorn <opidhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:02:56 by opidhorn          #+#    #+#             */
/*   Updated: 2024/11/05 14:53:53 by opidhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_sqrt(int nb)
{
	if (nb > 0)
		return (nb);
	return (-nb);
}

# define ABS(Value) ft_sqrt(Value)
#endif