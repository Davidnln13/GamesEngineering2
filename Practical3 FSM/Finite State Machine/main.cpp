//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "Command.h"
#include "InputHandler.h"
#include "GameActor.h"
#include "JumpCommand.h"
#include "FireCommand.h"
#include "CrouchCommand.h"
#include "MeleeCommand.h"
#include "ShieldCommand.h"

/*
   Author: David Nolan
   Version: 1.0
   Date:
   Hours Worked:
   Description: Demonstrating FSM pattern
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
	//player that performs the commands
	GameActor* actor = new GameActor();	
	//event to check for key press
	SDL_Event e;
	//setting up concrete commands 
	JumpCommand* jump = new JumpCommand(actor);
	FireCommand* fire = new FireCommand(actor);
	CrouchCommand* crouch = new CrouchCommand(actor);
	MeleeCommand* melee = new MeleeCommand(actor);
	ShieldCommand* shield = new ShieldCommand(actor);
	//binding keys to commands 
	inputHandler.bindCommand("space", jump);
	inputHandler.bindCommand("f", fire);
	inputHandler.bindCommand("c", crouch);
	inputHandler.bindCommand("m", melee);
	inputHandler.bindCommand("s", shield);
	std::cout << "Space-Jump, F-Fire, C-Crouch, M-Melee, S-Shield, U-Undo" << std::endl;
	while (close == false)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				close = true;
			}
			else if (SDL_KEYDOWN == e.type)
			{
				//command = to the pointer returned from handleinput
				inputHandler.handleInput(e);
			}
		}
		//update surface
		SDL_UpdateWindowSurface(window);

		//draw GameActor(rectangle)
		actor->draw(screenSurface);		
	}

	//Destroy window
	SDL_DestroyWindow( window );

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}