/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:40:45 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 20:19:38 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	s_len;

	s_len = ft_strlen(s) +1;
	str = malloc(s_len);
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, s_len);
	return (str);
}

/* int	main(void)
{
	char *original_str = "Hello, world!";
	char *dup_str = ft_strdup(original_str);
	
	printf("Original  : %s\n", original_str);
	printf("Duplicated: %s\n", dup_str);
	
	free(dup_str);
	
	char *error_str = ft_strdup("This is a long string "
	"that requires a lot of memory to duplicate");
	if (error_str == NULL)
		printf("Error: No se pudo duplicar la cadena debido a la falta de memoria.\n");
} */
//gcc ft_strdup.c ft_strlen.c ft_memcpy.c && ./a.out