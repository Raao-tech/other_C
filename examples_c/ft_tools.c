/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:47:04 by rafael            #+#    #+#             */
/*   Updated: 2025/08/14 14:15:18 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
	To Do: 
		Esta función muestra uno auno los chars de un string y reugnta si se
		continua con uns alto de linea o no.
	Parameters:
		char	*str	puintero al primer caracter del string.
		int	new_line	valor booleano para confirmar un salto de linea. 
		(1 = true)	(anynumber = false)
*/
void	ft_prichar(char	*str, int	new_line)
{
	int	i;
	
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	if (new_line)
		write(1, "\n", 1);
}