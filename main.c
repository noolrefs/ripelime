#include "vendor/raylib/raylib.h"
#include "vendor/raylib/raygui.h"

int main(void){
    InitWindow(100, 200, "Ripelime");

    const int monitor = GetCurrentMonitor();
    const int monitor_height = GetMonitorHeight(monitor);
    const int monitor_width = GetMonitorWidth(monitor);

    float window_height = monitor_height * 0.65;
    float window_width = window_height/2;

    SetWindowSize(window_width, window_height);
    SetWindowPosition((monitor_width -  window_width) / 2, (monitor_height - window_height) / 2);

    SetTargetFPS(60);

    
    while (!WindowShouldClose()){
       
        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}