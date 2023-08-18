/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:41:47 by halyilma          #+#    #+#             */
/*   Updated: 2023/08/01 15:12:54 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	get_size(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	j = 0;
	slen = get_size(src);
	while (dest[i])
	{
		i++;
	}
	dlen = i;
	if (size == 0 || size <= dlen)
		return (slen + size);
	j = 0;
	while (src[j] && j < size - dlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
