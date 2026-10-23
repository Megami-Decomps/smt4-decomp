#include "common.h"

extern "C" void sceneLoadParameterPreset(u32 preset, f32 *first, f32 *second, f32 *third)
{
    switch (preset) {
    case 0:
        *first = 300.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 1:
        *first = 250.0f;
        *second = 200.0f;
        *third = 250.0f;
        break;
    case 2:
        *first = 600.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 3:
        *first = 1200.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 4:
        *first = 2200.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 5:
        *first = 4000.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 6:
        *first = 300.0f;
        *second = 300.0f;
        *third = 300.0f;
        break;
    case 7:
        *first = 500.0f;
        *second = 200.0f;
        *third = 500.0f;
        break;
    case 8:
        *first = 100.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 9:
        *first = 900.0f;
        *second = 200.0f;
        *third = 120.0f;
        break;
    case 10:
        *first = 200.0f;
        *second = 200.0f;
        *third = 200.0f;
        break;
    }
}
