#include <iostream>
#include "raylib.h"

int main(void)
{
    std::cout << "Init" << std::endl;
    InitWindow(800, 600, "Title");
    SetTargetFPS(60);
    Camera2D mainCamera;
    mainCamera.zoom = 1;
    mainCamera.offset = {(float)(GetScreenWidth() / 2), (float)(GetScreenHeight() / 2)};
    mainCamera.rotation = 0;
    mainCamera.target = {0, 0};
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(LIGHTGRAY);
        BeginMode2D(mainCamera);
        DrawText("This is a new window", 0, 0, 10, RED);
        EndMode2D();
        EndDrawing();
    }
    CloseWindow();
}