#include "raylib.h"

void ToggleFullScreeWindow(int windowWidth, int windowHeight)
{
    if (!IsWindowFullscreen())
    {
        int monitor = GetCurrentMonitor();
        SetWindowSize(GetMonitorWidth(monitor), GetMonitorHeight(monitor));
        ToggleFullscreen();
    }
    else
    {
        ToggleFullscreen();
        SetWindowSize(windowWidth, windowHeight);
    }
}


int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "first window");

    while (!WindowShouldClose())   
    {
        if (IsKeyPressed(KEY_F))
            ToggleFullScreeWindow(screenWidth, screenHeight);
        BeginDrawing();
        ClearBackground(LIME);
        DrawText("I am in your room, under your bed!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
}