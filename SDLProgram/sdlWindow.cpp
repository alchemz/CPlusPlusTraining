#include <SDL.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
//declare varaibles
const int SCREEN_WIDTH=800;
const int SCREEN_HEIGHT=600;
  if(SDL_Init(SDL_INIT_VIDEO)<0)
  {
  cout<<"SDL failed"<<endl;
  return 1;
  }
  
  SDL_Window *window= SDL_CreateWindow("Particle Fire Explosion", 
                                      SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
                                      SCREEN_WIDTH, SCREEN_HEIGHT
 
 //check to see
 if(window == NULL)
 {
 SDL_Quit();
 printf(SDL_GetError());
 
 return 2;//return null
 }
 
 bool quit=false;
 SDL_Event event;
 
 //call first to create it sucessfully
 while(!quit) //equal to while(true)
 {
 //update particles
 //draw particle
 //check for message//events
 
 whileSDL_PollEvents())
 {
  if(event.type==SDL)Quit)
  {
    quit=true;
  }
 }
 }
 //clean the resource
 SDL_DestroyWindow(window);
 SDL_WINDOW_SHOWN);
  SDL_Quit();
  
  returen 0;
}
