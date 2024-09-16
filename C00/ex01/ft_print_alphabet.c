/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:12:19 by moraouf           #+#    #+#             */
/*   Updated: 2024/08/27 12:29:31 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	int	x;

	x = 'a';
	while (x <= 'z' )
	{
		write(1, &x, 1);
		x++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
	return 0;
} */
