#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	snk.UpdateSnake(gfx,wnd.kbd);
	snk2.UpdateSnake(gfx, wnd.kbd);
	
}

void Game::ComposeFrame()
{
	

}
