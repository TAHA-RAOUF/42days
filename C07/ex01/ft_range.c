/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:50:52 by moraouf           #+#    #+#             */
/*   Updated: 2024/09/16 10:50:54 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 0;
	if (min >= max)
	{
		return (NULL);
	}
	j = max - min;
	tab = malloc(sizeof(int) * (j));
	if (tab == 0)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
 int main()
 {
 	int min = 0;
 	int max = 3;
 	int *tab= ft_range(min,max);
 	int i = 0;
 	while(i < max)
 	{
 		printf("%i",tab[i]);
 		i++;
 	}
 }*/
