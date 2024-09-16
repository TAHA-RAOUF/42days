/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:51:57 by moraouf           #+#    #+#             */
/*   Updated: 2024/09/16 10:51:58 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	str = malloc(sizeof(char) * (j + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int main()
// {
// 	char c[] = "";
// 	char *s=ft_strdup(c);
// 	printf("%s",s);
// }
