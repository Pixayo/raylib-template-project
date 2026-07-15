/* Original copyright disclaimer
 * This is a modified version of a template CMake project shipped with the raylib library
*/

/*******************************************************************************************
*
*   raylib [core] example - Basic window (adapted for HTML5 platform)
*
*   This example is prepared to compile for PLATFORM_WEB and PLATFORM_DESKTOP
*   As you will notice, code structure is slightly different to the other examples...
*   To compile it for PLATFORM_WEB just uncomment #define PLATFORM_WEB at beginning
*
*   This example has been created using raylib 1.3 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2015 Ramon Santamaria (@raysan5)
*
********************************************************************************************/
// This WAS prepared to compile for Web platform, I just don't use it.

#include "raylib.h"

int screenWidth = 800;
int screenHeight = 450;

void UpdateDrawFrame(void);


int main()
{
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        UpdateDrawFrame();
    }

    // De-Initialization
    CloseWindow();        // Close window and OpenGL context

    return 0;
}

// Update and draw one frame
void UpdateDrawFrame(void)
{
    // TODO: Update your variables here
    
    // Update
    // [...]

    // Draw
    BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
}
