/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:44:26 by moraouf           #+#    #+#             */
/*   Updated: 2024/08/28 19:27:13 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main ()
{
    int x = 10;
    int y = 5;
    int div;
    int mod;
    ft_div_mod(x,y,&div,&mod);
    printf("divison est %d\n",div);
    printf("le reste est %d", mod );
}
*/
