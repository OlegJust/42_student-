/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opidhorn <opidhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:29:36 by opidhorn          #+#    #+#             */
/*   Updated: 2024/11/05 12:08:35 by opidhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j] != '\0')
			ft_putchar(str[j]);
		ft_putchar('\n');
	}
	return (0);
}
