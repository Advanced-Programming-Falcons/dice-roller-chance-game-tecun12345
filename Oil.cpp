#include <raylib.h>
#include <string>
#include <ctime>
#include "dice.hpp"
int Num;

int main(void){
    const int sWidth = 1000;
    const int sHeight = 800;
    InitWindow(sWidth, sHeight, "Dice Roller");

    SetTargetFPS(60);
    srand(time(0));
   
    std::string message = "Press Space to roll";
    while(!WindowShouldClose()){
        if (IsKeyPressed(KEY_SPACE)){
            message = "rolled, roll again with space"
             Num = rand() % 6;
        }
        BeginDrawing();

        ClearBackground(BLUE);
        DrawText(message.c_str(), sWidth/2, sHeight/2, 40, WHITE);
        DrawRectangle(400, 280, 160, 160, WHITE);
         
        EndDrawing();
        
    }
  
    CloseWindow();
    return 0;
    
}