/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:47:04 by rafael            #+#    #+#             */
/*   Updated: 2025/08/15 19:42:29 by rafael           ###   ########.fr       */
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
/* 
	To Do:
		Verifica si el caracter dado es una de las unidades aceptadas
	Parameters:
		char *str	caracter de la cadena
		M = metro ; L = litro ; G = gramo . 
	Output:
		1 == true si es una de las unidades
		0 == false  si no cumpe con dicha condición
*/
int	ft_is_unity(char c)
{
	return (c == 'M' || c == 'G' || c == 'L');
}
/* 
	To Do:
		Verifica si el caracter dado es una de las escalas metricas aceptadas
	Parameters:
		char *str	caracter de la cadena
		' ' = unidad ; m = mili ; c = centi ; k = kilo .
	Output:
		1 == true si es una de las unidades
		0 == false  si no cumpe con dicha condición
*/
int	ft_is_scale(char c)
{
	return (c == ' ' || c == 'm' || c == 'k' || c == 'c');
}
int	ft_correct_unity(char *str, char (*unitys)[3])
{
	int	i;
	int	unity_count;
	
	i = -1;
	unity_count = 0;
	while (str[++i] && str[i+1] && str[i+2])
	{
		if (ft_is_unity(str[i+1]) && (str[i+2] == ' ')&& (unity_count < 2))
		{
			if (ft_is_scale(str[i]))
			{
				unitys[unity_count][0] = str[i];
				unitys[unity_count][1] = str[i+1];
				unitys[unity_count][2] = '\0';
				unity_count++;
			}
		}
	}
	return (unity_count == 2);//posible sresultados (si = 1) || (no = 0);
}