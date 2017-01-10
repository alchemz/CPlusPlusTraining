/*
Include the the path of lib

*/
#include <iostream>
#include <SDL.h>
using namespace std;
int main()
{
    //less than not, it will return 1
    if(SDL_Init(SDL_INIT_VIDEO) <0)
    {
    cout<<"SDL init failed. "<<endl;
    return 1;
    }
    cout<<"SDL init succeeded"<<endl;
    
    SDL_Quit();
    
    return 0;
}
