#include <raylib.h>
#include <string>
#include <ctime>
#include "dice.hpp"
int side;

int main(void){
    const int sWidth = 1000;
    const int sHeight = 800;
    InitWindow(sWidth, sHeight, "Dice Roller");

    SetTargetFPS(60);
    srand(time(0));

    Dice die(6);
   Texture2D One = LoadTexture("Dice_One.png");
    Texture2D Two = LoadTexture("Dice_Two.png");
    Texture2D Three = LoadTexture("Dice_Three.png");
    Texture2D Four = LoadTexture("Dice_Four.png");
    Texture2D Five = LoadTexture("Dice_Five.png");
    Texture2D Six = LoadTexture("Dice_Six.png");
    std::string message = "Press Space to roll";
    while(!WindowShouldClose()){
        if (IsKeyPressed(KEY_SPACE)){
            int side = die.Roll();
        }
        BeginDrawing();

        ClearBackground(BLUE);
        DrawText(message.c_str(), 300, 300, 35, WHITE);
        DrawRectangle(530, 430, 135, 135, WHITE);
         if (side == 1){
            DrawTexture(One, sWidth/2, sHeight/2, WHITE);
        }
        else if (side == 2){
            DrawTexture(Two, sWidth/2, sHeight/2, WHITE);
        }
         else if  (side == 3){
            DrawTexture(Three, sWidth/2, sHeight/2, WHITE);
        }
         else if (side == 4){
            DrawTexture(Four, sWidth/2, sHeight/2, WHITE);
        }
        else if (side == 5){
            DrawTexture(Five, sWidth/2, sHeight/2, WHITE);
        }
         else if (side == 6){
            DrawTexture(Six, sWidth/2, sHeight/2, WHITE);
        }
        EndDrawing();
        
    }
    UnloadTexture(One);
     UnloadTexture(Two);
     UnloadTexture(Three);
     UnloadTexture(Four);
     UnloadTexture(Five);
     UnloadTexture(Six);
    CloseWindow();
    return 0;
    
}