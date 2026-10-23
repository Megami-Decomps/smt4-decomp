/* NON_MATCHING: constant-pool order and VFP register allocation differ; final adjacent value stores are not grouped. */
#include "common.h"

struct LayoutCoordinateDefaults {
    u8 unk00[0xcc];
    f32 x[16];
    f32 y[16];
    f32 rotation[16];
    f32 value[16];
    f32 height[10];
};
struct LayoutCoordinateGlobals {
    u32 unk00;
    LayoutCoordinateDefaults *work;
};
extern "C" LayoutCoordinateGlobals DAT_004474f0;

/* Set the ten layout entries' positions, angles, values and common height. */
extern "C" void FUN_002df5f8(void)
{
    LayoutCoordinateDefaults *layout = DAT_004474f0.work;
    layout->x[0] = 145.0f;
    layout->y[0] = 165.0f;
    layout->rotation[0] = 40.0f;
    layout->height[0] = 42.0f;
    layout->x[1] = 150.0f;
    layout->y[1] = 170.0f;
    layout->rotation[1] = 0.0f;
    layout->height[1] = 42.0f;
    layout->x[2] = 100.0f;
    layout->y[2] = 220.0f;
    layout->rotation[2] = 0.0f;
    layout->value[2] = 380.0f;
    layout->height[2] = 42.0f;
    layout->x[3] = 150.0f;
    layout->y[3] = 160.0f;
    layout->rotation[3] = 40.0f;
    layout->value[3] = 150.0f;
    layout->height[3] = 42.0f;
    layout->x[4] = 150.0f;
    layout->y[4] = 200.0f;
    layout->rotation[4] = 0.0f;
    layout->value[4] = 50.0f;
    layout->height[4] = 42.0f;
    layout->x[5] = 200.0f;
    layout->y[5] = 50.0f;
    layout->rotation[5] = 0.0f;
    layout->value[5] = 150.0f;
    layout->height[5] = 42.0f;
    layout->x[6] = 160.0f;
    layout->y[6] = 170.0f;
    layout->rotation[6] = 0.0f;
    layout->value[6] = 450.0f;
    layout->height[6] = 42.0f;
    layout->x[7] = 60.0f;
    layout->y[7] = 250.0f;
    layout->rotation[7] = 0.0f;
    layout->value[7] = 100.0f;
    layout->height[7] = 42.0f;
    layout->x[8] = 105.0f;
    layout->y[8] = 125.0f;
    layout->rotation[8] = 0.0f;
    layout->value[8] = 70.0f;
    layout->height[8] = 42.0f;
    layout->x[9] = 230.0f;
    layout->y[9] = 160.0f;
    layout->rotation[9] = 0.0f;
    layout->value[9] = 160.0f;
    layout->height[9] = 42.0f;
    layout->value[0] = 130.0f;
    layout->value[1] = 420.0f;
}
