#include "ripelime.h"

int main(void){
    SetConfigFlags(
        FLAG_WINDOW_RESIZABLE |
        0
    );
    InitWindow(1280, 720, "ripelime");

    const int monitor = GetCurrentMonitor();
    const int monitor_height = GetMonitorHeight(monitor);
    const int monitor_width = GetMonitorWidth(monitor);
    float window_height = monitor_height * 0.65;
    float window_width = window_height/2;

    SetTargetFPS(GetMonitorRefreshRate(monitor));
    SetWindowSize(window_width, window_height);
    SetWindowPosition((monitor_width -  window_width) / 2, (monitor_height - window_height) / 2);

    start();
    while (!WindowShouldClose())
    {
        update();
        BeginDrawing();
        ClearBackground(BLACK);
        render();
        EndDrawing();
    }
    finish();

    CloseWindow();
}