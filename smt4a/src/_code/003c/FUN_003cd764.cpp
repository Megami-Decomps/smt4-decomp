/* NON_MATCHING: all instructions match except references to the swapped model-bank/1.0f literal pool order. */
#include "shard/W5_W5Match2_ModelColor.h"
extern "C" {
extern ModelColorBank g_asdModelBanks[];
u32 nw_ut_FloatColor_ToPicaU32(const ModelColor *color);
/* Set the model slot RGB color with full alpha and cache its packed form. */
void FUN_003cd764(u32 slot, u32 bank, f32 red, f32 green, f32 blue)
{
    ModelColorWork *work = g_asdModelBanks[bank].slots[slot]->work;
    ModelColor *color = &work->color;
    color->r = red;
    color->g = green;
    color->b = blue;
    color->a = 1.0f;
    work->packed = nw_ut_FloatColor_ToPicaU32(color);
}
}
