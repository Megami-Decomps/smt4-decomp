#include "common.h"

// Select the three distance parameters for a camera preset, preserving them for unknown presets.
extern "C" void cameraGetDistancePreset(u32 preset, f32 *distance, f32 *height, f32 *offset)
{
    switch (preset) {
    case 0:
        *distance = 300.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    case 1:
        *distance = 250.0f;
        *height = 200.0f;
        *offset = 250.0f;
        return;
    case 2:
        *distance = 600.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    case 3:
        *distance = 1200.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    case 4:
        *distance = 2200.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    case 5:
        *distance = 4000.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    case 6:
        *distance = 300.0f;
        *height = 300.0f;
        *offset = 300.0f;
        return;
    case 7:
        *distance = 500.0f;
        *height = 200.0f;
        *offset = 500.0f;
        return;
    case 8:
        *distance = 100.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    case 9:
        *distance = 900.0f;
        *height = 200.0f;
        *offset = 120.0f;
        return;
    }
}
