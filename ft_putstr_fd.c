/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:54:16 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 14:59:02 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/* int main(void)
{
	char	*str;

	str = "hola";
	ft_putstr_fd(str, 0);
	ft_putchar_fd('\n', 1); //SALTO
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1); //SALTO
	ft_putstr_fd(str, 2);
} */