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
	snk.UpdateSnake(gfx,wnd.kbd,eats);
	snk2.UpdateSnake(gfx, wnd.kbd,eats);
	
}

void Game::ComposeFrame()
{
	eats.DrawSnekEats(gfx);
	//brd.ScoreToPixelDraw({ 1,2 }, gfx, { 255,255,255 });

}
