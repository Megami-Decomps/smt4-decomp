/* NON_MATCHING: retail loads the two fog defaults before the color packing, which also uses different registers. */
#include "Model/MoriModelManager.h"
#include "classes/Obj557b68.h"
#include <string.h>

/* The high byte carries the fog mode rather than opacity. */
struct ColorRgbm {
    u8 r;
    u8 g;
    u8 b;
    u8 mode;
};

/* Sets the same five range and falloff fields initialized by moriSceneSetFogDefaults. */
static __inline void moriSceneSetFogRange(Obj557b68 *scene, f32 start, f32 end, f32 offset, f32 scale, f32 power)
{
    scene->fogOffset = offset;
    scene->fogScale = scale;
    scene->fogPower = power;
    scene->fogStart = start;
    scene->fogEnd = end;
}

/* Applies distance fog to the render scene using float RGB components in the range 0..255. */
extern "C" void mapApplySceneFog(s32 mode, ColorRgbm color, f32 red, f32 green, f32 blue,
                                 f32 start, f32 end, f32 power)
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
    Obj557b68 *scene = g_handleRegistry->scene();
    moriSceneSetFogRange(scene, start, end, 0.0f, 1.0f, power);
    memcpy(scene->fogColor, &color, sizeof(color));
}
