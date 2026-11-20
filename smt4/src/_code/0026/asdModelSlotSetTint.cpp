#include "common.h"
extern "C" {
struct FloatColor { f32 red,green,blue,alpha; };
struct ModelTintWork { u8 unk00[0xCC]; FloatColor color; u8 unkDC[0x24]; u32 packed; };
struct ModelTintSlot { u8 unk00[8]; ModelTintWork *work; };
struct ModelTintBank { u8 unk00[0x264]; ModelTintSlot *slots[8]; };
extern ModelTintBank g_asdModelSlotBanks[];
u32 nw_ut_FloatColor_ToPicaU32(const FloatColor *color);
/* Set the optional model slot tint and cache the packed GPU color. */
void asdModelSlotSetTint(s32 slot, u32 bank, FloatColor color)
{
    if (slot < 0)
        return;
    ModelTintWork *work = g_asdModelSlotBanks[bank].slots[slot]->work;
    FloatColor *tint = &work->color;
    *tint = color;
    work->packed = nw_ut_FloatColor_ToPicaU32(tint);
}
}
