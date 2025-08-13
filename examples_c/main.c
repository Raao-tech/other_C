/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 23:39:05 by rafael            #+#    #+#             */
/*   Updated: 2025/08/13 23:04:27 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* void	lentgh_conversor(char *unity_current, char *unity_target, int input)
{
	if (unity_current == 'm')
		input = input*
	
} */

int	main(int argn, char **arg)
{
	size_t	input_size;
	char	input_buffer[256];
	int		i;

	write(1, "Unidad actual, Unidad Deseada y el entero a convertr  => mg g 345\n", 66);
	//Se le pregunta al usuario las unidades a convertir y la cantidad
	input_size = read(0, input_buffer, (sizeof(input_buffer) -1));
	//Caso tal de que no haya escrito nada, se manda un mensaje de error
	if((input_size) <= 1)
	{	
		write(2, "Error de lectura, pruebe ingresando un correct input\n", 53);
		return	(1);
	}
	// printf("el input tiene un tamaño de : %ld", input_size);
	i = 0;
	//Se desinga NULL en el ultimo espacio en memoria del buffer(por eso el menos 1)
	input_buffer[input_size] = '\0';

	//Se lee y muestra uno por uno los caracteres del User's Input
	while (input_buffer[i])
	{
		write(1, &input_buffer[i], 1);
		i++;
	}
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