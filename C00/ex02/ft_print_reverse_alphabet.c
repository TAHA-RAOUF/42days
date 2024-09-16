/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:47:03 by moraouf           #+#    #+#             */
/*   Updated: 2024/08/27 16:06:51 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a' )
	{
		write(1, &a, 1);
		a--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
