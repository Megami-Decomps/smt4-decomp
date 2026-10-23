/* NON_MATCHING: projected-point stack reuse, vector constants and VFP scheduling differ from retail. */
#include "shard/S1Mover.h"
#include "gfx/DebugGuides.h"

extern "C" {
void *FUN_00152f54(void);
void FUN_002a1850(Vec3f *out, s32 mode, void *context, const Vec3f *point);
void FUN_0032c810(u32 firstColor, u32 secondColor, DebugGuidePoint start,
                  DebugGuidePoint end, DebugGuidePoint scale);

void FUN_00280840(s32 count, u32 firstColor, u32 secondColor, f32 x, f32 y, f32 z, f32 spacing)
{
    s32 first = -(count >> 1);
    f32 offsetX = (f32)first * spacing;
    f32 offsetZ = (f32)first * spacing;
    void *context = FUN_00152f54();
    for (s32 i = 0; i < count; ++i) {
        Vec3f start = {offsetX + x, y, offsetZ + z};
        Vec3f end = {offsetX + x, y, offsetZ + (f32)(count - 1) * spacing + z};
        Vec3f screenStart, screenEnd;
        FUN_002a1850(&screenStart, 0, context, &start);
        FUN_002a1850(&screenEnd, 0, context, &end);
        DebugGuidePoint drawStart = {screenStart.x, screenStart.y};
        DebugGuidePoint drawEnd = {screenEnd.x, screenEnd.y};
        DebugGuidePoint scale = {1.0f, 1.0f};
        FUN_0032c810(firstColor, secondColor, drawStart, drawEnd, scale);
        offsetX += spacing;
    }
    offsetX = (f32)first * spacing;
    for (s32 i = 0; i < count; ++i) {
        Vec3f start = {offsetX + x, y, offsetZ + z};
        Vec3f end = {offsetX + (f32)(count - 1) * spacing + x, y, offsetZ + z};
        Vec3f screenStart, screenEnd;
        FUN_002a1850(&screenStart, 0, context, &start);
        FUN_002a1850(&screenEnd, 0, context, &end);
        DebugGuidePoint drawStart = {screenStart.x, screenStart.y};
        DebugGuidePoint drawEnd = {screenEnd.x, screenEnd.y};
        DebugGuidePoint scale = {1.0f, 1.0f};
        FUN_0032c810(firstColor, secondColor, drawStart, drawEnd, scale);
        offsetZ += spacing;
    }
}
}