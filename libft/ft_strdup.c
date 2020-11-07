/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 23:43:32 by gselyse           #+#    #+#             */
/*   Updated: 2020/05/03 23:43:32 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dub;
	size_t		len;

	len = ft_strlen(s) + 1;
	dub = (char*)malloc(sizeof(*dub) * len);
	if (dub == NULL)
		return (0);
	ft_memcpy(dub, s, len);
	return (dub);
}
