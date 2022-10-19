#include<raylib.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<math.h>

int main(void)
{
    const int screen_width = 1280;
    const int screen_height = 720;
    InitWindow(screen_width, screen_height, "Super Badminton");

    int p1score = 0;
    int p2score;

    float test;
    test = nearbyintf(2.5);

    Vector2 racket1 = { nearbyintf((float) screen_width / 17), (float) screen_height / 2 };
    Vector2 racket1_size = { 20, 100 };
    Vector2 racket2 = { nearbyintf((float) screen_width - 100), (float) screen_height / 2 };
    printf("%f\n", racket2.x);
    Vector2 racket2_size = { 20, 100 };

    Vector2 ball = { (float) screen_width / 2, (float) screen_height / 2 };
    ball.x -= 5.0f;

    SetExitKey('q');
    SetTargetFPS(60);

    int bounce = 0;
    int first = 1;
    int reset = 0;

    while (!WindowShouldClose()) {
    if (IsKeyDown(KEY_K)) racket1.y -= 10.0f;
    if (IsKeyDown(KEY_J)) racket1.y += 10.0f;
    
    int collided;
    int ycollide = 0;
    printf("%f\n %f\n", ball.x, racket2.x); 
//    if (ball.y < screen_height)
//        ball.y -= 10.0f;
//    else
//        ball.y += 10.0f;
    racket2.y = ball.y;

    int i;
    for (i = 0; i < 100; i++) {
        if (ball.x == racket1.x && ball.y == (racket1.y + i)) {
            collided = 1;
            bounce = 1;
            first = 0;
        } 
    }
    if (ball.x == 1155) {
        collided = 0;
        bounce = 0;
    }

    if (reset) {
        BeginDrawing();
            DrawText("3", (float) screen_width / 2, (float) screen_height / 2 - 200, 200, RED);
        EndDrawing();
        sleep(1);
        BeginDrawing();
            DrawText("2", (float) screen_width / 2, (float) screen_height / 2, 200, RED);
        EndDrawing();
        sleep(1);
        BeginDrawing();
            DrawText("1", (float) screen_width / 2, (float) screen_height / 2 + 200, 200, RED);
        EndDrawing();
        sleep(1);
        reset = 0;
    } else if (collided) {
        ball.x += 10.0f;
    } else {
        ball.x -= 10.0f;
    }
    if (first) {
    } else if (bounce) {
        ball.y -= 10.0f;
    } else {
        ball.y += 10.0f;
    }

    if (ball.y == 0.0) {
        bounce = 0;
    } else if (ball.y == 700) {
        bounce = 1;
    } 

    if (ball.x < 0) {
        collided = 0;
        bounce = 0;
        first = 1;
        ball.y = (float) screen_height /2;
        ball.x = (float) screen_width / 2;
        ball.x -= 5.0f;
        reset = 1;
        p2score++;
    }
    printf("%f\n", racket1.y);
     

        BeginDrawing();
            ClearBackground(WHITE);
            DrawText("Super", 190, 200,  20, BLACK);
            DrawText("Badminton", 190, 250,  20, BLACK);


            char score_as_string[3];
            char p2score_as_string[3];

            sprintf(score_as_string, "%d", p1score);
            sprintf(p2score_as_string, "%d", p2score);
            DrawText("Player 1 Score:", 190, screen_width / 2,  20, BLACK);
            DrawText(score_as_string, 360, screen_width / 2,  20, RED);
    
            DrawText("Player 2 Score:", 850, screen_width / 2,  20, BLACK);
            DrawText(p2score_as_string, 1020, screen_width / 2,  20, RED);

            DrawCircleV(ball, 20,  BLACK);
            DrawRectangleV(racket1, racket1_size, BLACK);
            DrawRectangleV(racket2, racket2_size, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
