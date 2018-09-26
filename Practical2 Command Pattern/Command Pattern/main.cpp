//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "Command.h"
#include "InputHandler.h"
#include "GameActor.h"

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
	InputHandler inputHandler;
	GameActor* actor;
	std::string s;
	while (close == false)
	{
		std::cout << "What would you like your character to do? Available commands: Jump, Fire, Crouch, Shield, Melee" << std::endl;
		std::cin >> s;
		if (s == "QUIT")
			close = true;
		Command* command = inputHandler.handleInput(s);
		if (command)
		{
			command->Execute(actor);
		}
	}

	//Destroy window
	SDL_DestroyWindow( window );

	//Quit SDL subsystems
	SDL_Quit();
	
	return 0;
}