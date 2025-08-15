/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 23:39:05 by rafael            #+#    #+#             */
/*   Updated: 2025/08/15 19:43:07 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "COMMON.h"

/* void	lentgh_conversor(char *unity_current, char *unity_target, int input)
{
	if (unity_current == 'm')
		input = input*
	
} */

int	main(int argn, char **arg)
{
	size_t	input_size;
	int		i;
	char	input_buffer[256];
	char	unitys[2][3];
	
	ft_prichar("Unidad actual, Unidad Deseada y el entero a convertir", 0);
	ft_prichar(" Ejemplo: mg g 45", 1);
	input_size = read(0, input_buffer, (sizeof(input_buffer) -1));
	//Caso tal de que no haya escrito nada, se manda un mensaje de error
	if((input_size) <= 1)
	{	
		write(2, "Error de lectura, pruebe ingresando un correct input\n", 53);
		return	(1);
	}
	i = 0;
	input_buffer[input_size] = '\0';
	if(ft_correct_unity(input_buffer, unitys))
	{
		ft_prichar(unitys[0], 1);
		ft_prichar(unitys[1], 1);
		/* write(1, &unitys[0][1],1);
		write(1, &unitys[0][2],1); */
	}
	else
		write(2, "Error en las unidades",21);
	return (0);
}
/*
		Pasos a Seguir:
			1) Preguntar:  "Unidad actual ,  Unidad Deseada y el entero a convertr"  => "mg_g_345" o "mg_ _g_ 345"
			2) Recibir y verificar que se cumpla en las unidades: "_u_"   "cu_" "mu_"  "ku_"
			3) captar solamente datos númericos en la cadena de char: "345"
			4) Convertir el dato numérico en char a int (Atoi)
			5) Lógica de conversión de una unidad a otra
			6) Mostrar el resutlado ya covnertido "mg_345 son _g_ 0.0345"

			

		Funciones que peuden ser útiles para construir el programa:}

			1)print_all() = put_nbr() + Atoi() + write()(que lea arrays completos sin necesidad de crearlo en el código); 
*/