/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 23:39:05 by rafael            #+#    #+#             */
/*   Updated: 2025/08/15 23:15:42 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "COMMON.h"

/* void	lentgh_conversor(char *unity_current, char *unity_target, int input)
{
	if (unity_current == 'm')
		input = input*
	
} */
int	_is_number(char *str, char *nbr)
{
	int	i;
	int	i_nbr;
	int	result;

	i = -1;
	i_nbr = 1;
	result = 0;
	while (str[++i] && (result == 0))
	{
		while ((str[++i] >= '0' && str[i] <= '9') && str[i] != ' ')
		{
			nbr[++i_nbr] = str[i];
			/* write(1, &nbr[i_nbr], 1); */
			result = 1;
		}
	}
	nbr[++i_nbr] = '\0';
	
	return (result);
}
int	main(int argn, char **arg)
{
	size_t	input_size;
	int		i;
	char	input_buffer[256];
	char	unitys[2][3];
	char	*nbr_buffer;
	
	ft_prichar("Unidad actual, Unidad Deseada y el entero a convertir", 0, 0);
	ft_prichar(" Ejemplo: mg g 45", 1, 0);
	input_size = read(0, input_buffer, (sizeof(input_buffer) -1));
	nbr_buffer = malloc(input_size);
	//Caso tal de que no haya escrito nada, se manda un mensaje de error
	if((input_size) <= 1)
	{	
		write(2, "Error de lectura, pruebe ingresando un correct input\n", 53);
		return	(1);
	}else if (nbr_buffer == ((void *)0))
	{
		write(2, "ERROR de asignación de espacio en memoria para el array number", 62);
		return (1);
	}
	nbr_buffer[input_size] = '\0';
	nbr_buffer[0] = '\0';
	i = 0;
	input_buffer[input_size] = '\0';
	if(ft_correct_unity(input_buffer, unitys) && _is_number(input_buffer, nbr_buffer))
	{
		ft_prichar(unitys[0], 1, 0);
		ft_prichar(unitys[1], 1, 0);
		ft_prichar(nbr_buffer, 1, 1);
		/* write(1, &unitys[0][1],1);
		write(1, &unitys[0][2],1); */
	}
	else
		write(2, "Error en las unidades o en la cnatidad a converitr",51);

	free(nbr_buffer);
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