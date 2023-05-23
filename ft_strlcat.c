/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:14:21 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/11 12:48:07 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (dstsize == 0)
		return (src_l);
	if (dst_l >= dstsize)
		return (dstsize + src_l);
	i = 0;
	while (src[i] && i < dstsize - dst_l - 1)
	{
		dst[i + dst_l] = src[i];
		i++;
	}
	dst[i + dst_l] = '\0';
	return (dst_l + src_l);
}

/* int	main(void)
{
	char src[31] = "rrrrrrrrrrrrrrr";
	char dst[31];
	printf("dst: %s\nsrc: %s\n", dst, src);

	printf("%zu\n", ft_strlcat(dst, src, 31));

	printf("dst: %s\nsrc: %s", dst, src);

///////////////FUNCION ORIGINAL/////////////////
	char src_s[31] = "rrrrrrrrrrrrrrr";
	char dst_s[31];
	printf("\n\nFUNCION ORIGINAL\ndst_o: %s\nsrc_o: %s\n", dst_s, src_s);

	printf("%zu\n", strlcat(dst_s, src_s, 31));

	printf("dst_o: %s\nsrc_o: %s", dst_s, src_s);	
} */