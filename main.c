/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 03:09:12 by rafael            #+#    #+#             */
/*   Updated: 2025/08/07 03:19:34 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raylib.h"

int main(void)
{
    int	width;
    int	height;
	
	width = 800;
	height = 450;
	
	//Se incializa el el tamaño de ventana
    InitWindow(width, height, "raylib [core] example - basic window");
	 
	//mientras nadie le de a cerrar o ESC ejecuta el programa
    while (!WindowShouldClose())
    {
		//preparate para dibujar
        BeginDrawing(); 
			//limpia el fondo y colorealo del cokor RAYWHITE
            ClearBackground(RAYWHITE); 
			//dibuja el texto dado en parametros
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing(); // finaliza el dibujo.
    }

    CloseWindow(); // cierra la ventana

    return 0;// indica que todo ha ido bien.
} 
/*
	Debes de usar el comando:
gcc main.c -o mi_juego -I/home/rafael/raylib/src -L/home/rafael/raylib/src -lraylib -lm -ldl -lpthread -lGL -lX11

  */