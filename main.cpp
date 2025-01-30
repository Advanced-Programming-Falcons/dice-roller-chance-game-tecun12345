#include <raylib.h>
#include <string>
#include <ctime>
int Num;

int main(void){
     const int sWidth = 1000;
    const int sHeight = 800;
    InitWindow(sWidth, sHeight, "Dice Roller");

    SetTargetFPS(60);
    srand(time(0));
    Texture2D One = LoadTexture("Dice_One.png");
    Texture2D Two = LoadTexture("Dice_Two.png");
    Texture2D Three = LoadTexture("Dice_Three.png");
    Texture2D Four = LoadTexture("Dice_Four.png");
    Texture2D Five = LoadTexture("Dice_Five.png");
    Texture2D Six = LoadTexture("Dice_Six.png");
    std::string textToSay = "Press Space to roll";
    while(!WindowShouldClose()){

        if (IsKeyPressed(KEY_SPACE)){
             Num = rand() % 6;
        }
        BeginDrawing();

        ClearBackground(BLUE);
        DrawText(textToSay.c_str(), 300, 300, 50, WHITE);
        DrawRectangle(530, 430, 135, 135, WHITE);
         
        if (Num == 0){
            DrawTexture(One, sWidth/2, sHeight/2, WHITE);
        }
        else if (Num == 1){
            DrawTexture(Two, sWidth/2, sHeight/2, WHITE);
        }
         else if  (Num == 2){
            DrawTexture(Three, sWidth/2, sHeight/2, WHITE);
        }
         else if (Num == 3){
            DrawTexture(Four, sWidth/2, sHeight/2, WHITE);
        }
        else if (Num == 4){
            DrawTexture(Five, sWidth/2, sHeight/2, WHITE);
        }
         else if (Num == 5){
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