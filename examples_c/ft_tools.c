/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:47:04 by rafael            #+#    #+#             */
/*   Updated: 2025/08/15 22:55:25 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
	To Do: 
		Esta función muestra uno auno los chars de un string y pregunta si se
		continua con un salto de linea o no.
	Parameters:
		char	*str	puintero al primer caracter del string.
		int	new_line	valor booleano para confirmar un salto de linea. 
		(1 = true)	(anynumber = false)
*/
void	ft_prichar(char	*str, int	new_line, int init)
{
	if (init == 0)
		init = -1;
	
	while (str[++init])
		write(1, &str[init], 1);
	if (new_line)
		write(1, "\n", 1);
}
