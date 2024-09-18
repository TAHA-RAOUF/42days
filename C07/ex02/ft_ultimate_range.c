/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:28 by moraouf           #+#    #+#             */
/*   Updated: 2024/09/16 15:11:32 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = max - min;
	*range = malloc(sizeof(int) * j);
	if (!*range)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (j);
}
/*
int main()
{
	int i = 0;
 	int min = 0;
 	int max = 3;
	int *tab ;
	int lenght;
	lenght = ft_ultimate_range(&tab,min,max);
	while(i < max)
	{
		printf("%i\t",tab[i]);
		i++;
	}
 	printf("\n%i",lenght);
}*/
