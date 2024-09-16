/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:22:17 by moraouf           #+#    #+#             */
/*   Updated: 2024/08/29 10:55:09 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

int main()
{
    int string[] = {1,2,3,4,5};
    int size;
    int i;

    i = 0;
    size = 5;

    ft_rev_int_tab(string, size);
    while( i < size)
    {
        printf("%d", string[i]);
        i++;
    }
    return(0);
}
