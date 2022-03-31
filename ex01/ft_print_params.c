/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:55:49 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/31 01:28:14 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, &"\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}
