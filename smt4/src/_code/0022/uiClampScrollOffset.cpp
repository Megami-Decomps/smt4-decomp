#include "ui/ScreenObject.h"

extern "C" {

/* Clamps a scroll offset into [0, size - (400, 240)], i.e. keeps the 400x240 screen inside the object. */
void uiClampScrollOffset(ScreenObject *object, f32 *offset)
{
    s32 maxX = (s32)(object->size.x - 400.0f);
    s32 maxY = (s32)(object->size.y - 240.0f);
    offset[0] = offset[0] > 0.0f ? offset[0] : 0.0f;
    offset[1] = offset[1] > 0.0f ? offset[1] : 0.0f;
    if (offset[0] > (f32)maxX)
        offset[0] = (f32)maxX;
    if (offset[1] > (f32)maxY)
        offset[1] = (f32)maxY;
}

} /* extern "C" */
