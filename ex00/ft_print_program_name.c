/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:55:49 by unix_user         #+#    #+#             */
/*   Updated: 2022/04/01 01:18:33 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (*argv[0])
		write(1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
