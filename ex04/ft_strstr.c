/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:08:03 by iung              #+#    #+#             */
/*   Updated: 2022/10/06 18:26:31 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
	
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i+j] == to_find[j])
		{
			if (to_find[j] == '\0')
			{
				return &str[i];
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char str[] = "Bonjour la famille";
	char to_find[] = "famille";
	printf("%s", ft_strstr(str, to_find));
}
