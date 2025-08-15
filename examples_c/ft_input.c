/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 20:51:31 by rafael            #+#    #+#             */
/*   Updated: 2025/08/15 21:21:56 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/* 
	To Do:
		Verifica si el array en aputnado por *str contiene undiades aceptadas
		luego las guarda en el array bidimensional (*unitys)[3].
		WARNIGN: No verifica si la combinación de unidades usada por el 
		usuario es posible (No se puede convertir metros a litros por ejemplo) 
	Parameters:
		char *str	caracter de la cadena
		char (*unitys)[3] Puntero al primer elemento (que contiene 3 subelementos)
	Output:
		1 == TRUE  si la cantidad de unidades ingresadas es igual a 2
		0 == FALSE  si la cantidad de unidades ingresadas es distinto de 2

	Posible Mejora:   Enfocar la respuesta, que diga cuando es un problema del tipeo
	de unidades o de la cnatidad ingresada.
*/
int	ft_correct_unity(char *str, char (*unitys)[3])
{
	int	i;
	int	unity_count;
	
	i = -1;
	unity_count = 0;
	while (str[(++i)+2])
	{
		if (ft_is_unity(str[i+1]) && (str[i+2] == ' '))
		{
			if (ft_is_scale(str[i]))
			{
				unitys[unity_count][0] = str[i];
				unitys[unity_count][1] = (str[i+1])+32;
				unitys[unity_count][2] = '\0';
				unity_count++;
			}
		}
	}
	return (unity_count == 2);//Resultados: Tiene dos unidades? (si = 1) || (no = 0);
}
