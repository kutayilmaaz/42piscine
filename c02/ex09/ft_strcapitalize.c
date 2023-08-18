/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:46:25 by halyilma          #+#    #+#             */
/*   Updated: 2023/07/30 07:12:10 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	upper = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (upper == 1)
			{
				str[i] -= 32;
			}
			upper = 0;
		}
		else if (str[i] <= '9' && str[i] >= '0')
			upper = 0;
		else
			upper = 1;
		i++;
	}
	return (str);
}
