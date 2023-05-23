/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:49:24 by sanmetol          #+#    #+#             */
/*   Updated: 2023/03/20 16:24:20 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	ascii;
	int	line;

	ascii = 0;
	line = 1;
	while (ascii <= 127)
	{
		printf ("%d. %d, ", ascii, ft_isprint(ascii));
		if (line % 8 == 0 && line >= 5)
			printf ("\n");
		ascii++;
		line++;
	}
	printf ("%d", ft_strlen("hola"));
}
