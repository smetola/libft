/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:11:59 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:40 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i] && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char src[] = "que tal";
	char dst[10];
	//printf("dst: %s\nsrc: %s\n", dst, src);

	printf("%zu\n", ft_strlcpy(dst, src, 0));

	printf("dst: %s\nsrc: %s", dst, src);

//////////FUNCION ORIGINAL///////////
	char src_s[] = "que tal";
	char dst_s[10];
	//printf("\n\nFUNCION ORIGINAL\ndst_o: %s\nsrc_o: %s\n", dst_s, src_s);

	printf("\n%zu\n", strlcpy(dst_s, src_s, 0));

	printf("dst_o: %s\nsrc_o: %s", dst_s, src_s);
} */