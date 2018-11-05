//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "Entity.h"
#include "HealthComponent.h"
#include "ControlComponent.h"
#include "PositionComponent.h"
#include "AiSystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"


/*
   Author: David Nolan
   Version: 1.0
   Date:
   Hours Worked:
   Description: Demonstrating command patterns
*/
//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


/// <summary>
/// @brief starting point for all C++ programs.
/// 
/// Create a game object and run it.
/// </summary>
/// <param name=""></param>
/// <param name="argv"></param>
/// <returns></returns>

int main( int argc, char* args[] )
{
	bool close = false;
	////The window we'll be rendering to
	SDL_Window* window = NULL;
	
	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	////Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
	}
	else
	{
		//Create window
		window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( window == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
		}
		else
		{
			//Get window surface
			screenSurface = SDL_GetWindowSurface( window );

			//Fill the surface white
			SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
			
			//Update the surface
			SDL_UpdateWindowSurface( window );

		}
	}
	Entity player("Player"), dog("Dog"), alien("Alien"), cat("Cat");
	
	player.addComponent(new HealthComponent(100));
	player.addComponent(new ControlComponent(true));
	player.addComponent(new PositionComponent(50,50));

	alien.addComponent(new HealthComponent(150));
	alien.addComponent(new PositionComponent(400,180));

	dog.addComponent(new HealthComponent(80));
	dog.addComponent(new PositionComponent(75,85));

	cat.addComponent(new HealthComponent(40));
	cat.addComponent(new PositionComponent(100,100));

	AiSystem as;
	as.addEntity(alien);
	as.addEntity(dog);
	as.addEntity(cat);

	ControlSystem cs;
	cs.addEntity(player);

	RenderSystem rs;
	rs.addEntity(player);
	rs.addEntity(alien);
	rs.addEntity(dog);
	rs.addEntity(cat);


	////while (true) {
		as.update();
		cs.update();
		rs.update();
	//}
		system("PAUSE");

	//Destroy window
	SDL_DestroyWindow( window );

	//Quit SDL subsystems
	SDL_Quit();
	
	return 0;
}