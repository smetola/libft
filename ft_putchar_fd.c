/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanmetol <sanmetol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:51:22 by sanmetol          #+#    #+#             */
/*   Updated: 2023/05/19 14:54:36 by sanmetol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
	ft_putchar_fd('a', 0);
	ft_putchar_fd('\n', 1); //SALTO
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1); //SALTO
	ft_putchar_fd('a', 2);
} */