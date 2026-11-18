#include "gfx/ModelSlotColorApi.h"
extern "C" {
extern void *DAT_004398d4;
void asdModelClearSlotColors(u32 unused, f32 red, f32 green, f32 blue)
{
    if (DAT_004398d4 != NULL) {
        objModelSlotClearColor(static_cast<Obj003c7f08 *>(DAT_004398d4), red, green, blue);
    }
}
}
