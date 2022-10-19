#include<raylib.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<math.h>
#include "ball.h"

int main(void)
{
    const int screen_width = 1280;
    const int screen_height = 720;
    InitWindow(screen_width, screen_height, "bonk");

    struct ball ball1 = {300, 0, 0};


    SetTargetFPS(50);
    while (!WindowShouldClose()) {
        if (IsKeyDown(KEY_W)) {
            ball1.velocityy += 0.4f;
        }
        if (IsKeyDown(KEY_S)) ball1.velocityy -= 0.4f;
        if (IsKeyDown(KEY_A)) ball1.x -= 10.0f;
        if (IsKeyDown(KEY_D)) ball1.x += 10.0f;

        if (ball1.y > 600)
            ball1.velocityy += 0.4f;
        else
            ball1.velocityy -= 0.3f;

        if (ball1.y +10  < 0)
            ball1.velocityy -= 0.3f;


        ball1.y = ball1.y - ball1.velocityy;

        BeginDrawing();
            ClearBackground(BLUE);
            DrawText("Bonk", 190, 200,  20, BLACK);

            DrawCircle(ball1.x, ball1.y, 30, YELLOW);

            DrawRectangle(100, 650, 1000, 100, RED);
        EndDrawing();


    }
    CloseWindow();


    return 0;
}
