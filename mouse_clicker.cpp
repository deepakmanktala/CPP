#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>

#pragma comment(lib, "user32.lib")

using namespace std;
void clickAtCoordinates(int x, int y) {
    // Move the cursor to the specified coordinates (x, y)
    SetCursorPos(x, y);

    // Simulate mouse press (left button down)
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

    // Simulate mouse release (left button up)
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

int main() {
    while (true) {
        // Call the function to click at the (0,0) coordinates
        clickAtCoordinates(200, 200);

        // Wait for 20 seconds
        std::this_thread::sleep_for(std::chrono::seconds(25));
    }

    return 0;
}
