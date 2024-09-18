/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:55:51 by moraouf           #+#    #+#             */
/*   Updated: 2024/09/16 17:55:52 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	lenght(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;
	int	len;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	len = (i * (size -1)) + count + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*src;
	int		i;
	int		k;
	int		j;

	if (size == 0)
		return (malloc(sizeof(char)));
	src = malloc(sizeof(char) * lenght(size, strs, sep));
	if (src == 0)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			src[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			src[k++] = sep[j++];
		i++;
	}
	src[k] = '\0';
	return (src);
}
/*
int main()
{
	char *strs[] = {"ilham","taha"};
	char *sp = "***";
	char *src = ft_strjoin(0,strs,sp);
	printf("%s",src);
}*/