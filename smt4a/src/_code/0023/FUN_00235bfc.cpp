/* NON_MATCHING: retail loads the 0.0f/1.0f constants before the color packing and stores them with
 * two vstr; this build loads them late and pairs them in one vstmia. */
#include "common.h"

/* A color with an extra mode byte in place of alpha. */
struct ColorRgbm {
    u8 r;
    u8 g;
    u8 b;
    u8 mode;
};

/* The light the registry's scene object holds. */
struct RegistryScene {
    /* 0x000 */ u8 unk000[0x17c];
    /* 0x17c */ f32 x;
    /* 0x180 */ f32 y;
    /* 0x184 */ f32 unk184;
    /* 0x188 */ f32 unk188;
    /* 0x18c */ f32 z;
    /* 0x190 */ ColorRgbm color;
};

struct HandleRegistryView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ RegistryScene *scene;
};

extern "C" {
extern HandleRegistryView *g_handleRegistry;

/* Sets the scene light's color (components 0..255 as floats), mode (0, 1 or 2) and position. */
void FUN_00235bfc(s32 mode, ColorRgbm color, f32 red, f32 green, f32 blue, f32 x, f32 y, f32 z)
{
    color.r = (u32)red;
    color.g = (u32)green;
    color.b = (u32)blue;
    switch (mode) {
    case 0:
        color.mode = 0;
        break;
    case 1:
        color.mode = 1;
        break;
    case 2:
        color.mode = 2;
        break;
    }
    RegistryScene *scene = g_handleRegistry->scene;
    scene->x = x;
    scene->y = y;
    scene->unk184 = 0.0f;
    scene->unk188 = 1.0f;
    scene->z = z;
    scene->color = color;
}
}
