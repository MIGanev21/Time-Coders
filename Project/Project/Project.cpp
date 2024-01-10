#include "raylib.h"
#define MAX_INPUT_CHARS     5


void ToggleFullScreenWindow(int windowWidth, int windowHeight)
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



// Program main entry point

int main(void)
{
    // Initialization
    
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "first window");

    char name[MAX_INPUT_CHARS + 1] = "\0";      //  One extra space required for null terminator char '\0'
    int letterCount = 0;

    Rectangle textBox = { screenWidth / 2.0f + 500, 900, 225, 50 };
    bool mouseOnText = false;

    int framesCounter = 0;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        DrawText("Time", 900, 100, 200, BLACK);
        DrawText("Coders", 530, 300, 200, GRAY);
        ClearBackground(RAYWHITE);
        DrawText("Login", 925, 750, 60, LIGHTGRAY); // ("text", x, y, font, color)
        if (IsKeyPressed(KEY_F))
            ToggleFullScreenWindow(screenWidth, screenHeight); // ToggleFullScreenWindow
        // Update

        if (CheckCollisionPointRec(GetMousePosition(), textBox)) mouseOnText = true;
        else mouseOnText = false;

        if (mouseOnText)
        {
            // Set the window's cursor to the I-Beam
            SetMouseCursor(MOUSE_CURSOR_IBEAM);

            // Get char pressed (unicode character) on the queue
            int key = GetCharPressed();

            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                //  Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125) && (letterCount < MAX_INPUT_CHARS))
                {
                    name[letterCount] = (char)key;
                    name[letterCount + 1] = '\0'; // Add null terminator at the end of the string.
                    letterCount++;
                }

                key = GetCharPressed();  // Check next character in the queue
            }

            if (IsKeyPressed(KEY_BACKSPACE))
            {
                letterCount--;
                if (letterCount < 0) letterCount = 0;
                name[letterCount] = '\0';
            }
        }
        else SetMouseCursor(MOUSE_CURSOR_DEFAULT);

        if (mouseOnText) framesCounter++;
        else framesCounter = 0;


        // Draw

        BeginDrawing();


        DrawText("Please write your identification number:", 525, 850, 30, GRAY);

        DrawRectangleRec(textBox, LIGHTGRAY);
        if (mouseOnText) DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, RED);
        else DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, DARKGRAY);

       DrawText(name, (int)textBox.x + 5, (int)textBox.y + 8, 40, MAROON);

        DrawText(TextFormat("INPUT CHARS: %i/%i", letterCount, MAX_INPUT_CHARS), 915, 960, 20, DARKGRAY);

        if (mouseOnText)
        {
            if (letterCount < MAX_INPUT_CHARS)
            {
                // Draw blinking underscore char
                if (((framesCounter / 20) % 2) == 0) DrawText("_", (int)textBox.x + 8 + MeasureText(name, 40), (int)textBox.y + 12, 40, MAROON);
            }
            else DrawText("Press BACKSPACE to delete chars...", 1100, 980, 20, GRAY);
        }

        EndDrawing();

    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context
}

// Check if any key is pressed
//  We limit keys check to keys between 32 (KEY_SPACE) and 126
bool IsAnyKeyPressed()
{
    bool keyPressed = false;
    int key = GetKeyPressed();

    if ((key >= 32) && (key <= 126)) keyPressed = true;

    return keyPressed;
}