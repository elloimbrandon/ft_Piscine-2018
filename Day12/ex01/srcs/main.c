/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:43:27 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/08 20:54:13 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_puterror(argv[i], ft_cat(argv[i]));
			i++;
		}
		return (0);
	}
	else
		return (1);
}