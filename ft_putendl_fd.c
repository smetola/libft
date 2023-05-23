/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:29:33 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 16:28:30 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/* int main(void)
{
	char	*str;

	str = "hola";
	ft_putendl_fd(str, 0);
	ft_putchar_fd('\n', 1); //SALTO
	ft_putendl_fd(str, 1);
	ft_putchar_fd('\n', 1); //SALTO
	ft_putendl_fd(str, 2);
} */