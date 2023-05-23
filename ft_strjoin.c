/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:52:41 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/11 13:05:22 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;

	s3_len = ft_strlen (s1) + ft_strlen (s2);
	s3 = malloc(s3_len + 1);
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, s3_len + 1);
	ft_strlcat(s3, s2, s3_len + 1);
	return (s3);
}

/* int main(void)
{
	printf("%s", ft_strjoin("hola", "buenas"));
} */