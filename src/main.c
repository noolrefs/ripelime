#include "../vendor/raylib/raylib.h"
#include "../vendor/raylib/raygui.h"

int main(void){
    InitWindow(100, 200, "ripelime");
    const int monitor = GetCurrentMonitor();
    const int monitor_height = GetMonitorHeight(monitor);
    const int monitor_width = GetMonitorWidth(monitor);
    SetTargetFPS(GetMonitorRefreshRate(monitor));
    float window_height = monitor_height * 0.65;
    float window_width = window_height/2;

    SetWindowSize(window_width, window_height);
    SetWindowPosition((monitor_width -  window_width) / 2, (monitor_height - window_height) / 2);

    while (!WindowShouldClose())
    {
        // update here
        BeginDrawing();
        ClearBackground(BLACK);
        // draw stuff here
        EndDrawing();
    }

    CloseWindow();
}