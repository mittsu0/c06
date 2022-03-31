/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:38:31 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/31 22:46:14 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char	c1;
	char	c2;

	c1 = *a;
	c2 = *b;
	*a = c2;
	*b = c1;
}

char	*ft_sort_str(char *str, int size)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		flag = 0;
		while (i <= size - 2)
		{
			if (str[i] > str[i + 1])
			{
				ft_swap(str + i, str + i + 1);
				flag = 1;
			}
			i++;
		}
		i = 0;
	}
	return (str);
}

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
		ft_putstr(ft_sort_str(argv[i], ft_strlen(argv[i])));
}
